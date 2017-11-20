#include "graph.h"
#include "database.h"
#include <QDebug>

Graph::Graph()
{
    dfsDistance = 0;
}

Graph::~Graph()
{

}

bool Graph::empty()
{
    return graph.empty();
}

int Graph::size()
{
    return graph.size();
}

void Graph::initializeGraph()
{
    Database::returnGraphEdges();

//    fstream fin; // File stream variable.

//    // Opens the file.
//    fin.open("Map.txt");

//    // Reads in the contents of the file.
//    while(!fin.eof())
//    {
//        QString u; // Starting city.
//        QString v; // Ending city.
//        int weight; // Distance between the cities.

//        getline(fin, u, ',');
//        getline(fin, v, ',');
//        fin >> weight;
//        fin.ignore(1000, '\n');

//        // Inserts the edge to the graph.
//        insertEdge(u, v, weight);
//    }

//    fin.close();
}

int Graph::findVertex(QString city)
{
    int index = 0;
    bool found = false;

    // Searches for the city in the graph and returns the index of the graph it
    // was found, else returns the size of the graph.
    while(index < graph.size() && !found)
    {
        if(graph.at(index).city == city)
        {
            found = true;
        }
        else
        {
            index++;
        }
    }

    return index;
}

void Graph::insertVertex(QString city)
{
    // Adds the vertex to the graph if it does not yet exist.
    if(findVertex(city) == graph.size())
    {
        Vertex newVertex;

        newVertex.city = city;
        newVertex.visited = false;

        qDebug() << newVertex.city << endl;

        graph.push_back(newVertex);
    }
}

void Graph::insertEdge(QString u, QString v, int weight)
{
    // Returns the index of the vertex.
    int index = findVertex(u);

    // Adds the vertex to the graph if it does not yet exist and performs a
    // recursive call, else adds the edge to the edgeList of the specified vertex.
    if(index == graph.size())
    {
        insertVertex(u);

        insertEdge(u, v, weight);
    }
    else
    {
        Edge newEdge;

        newEdge.u = u;
        newEdge.v = v;
        newEdge.weight = weight;

        graph[index].edgeList.push_back(newEdge);
    }
}

QVector<QString> Graph::vertices()
{
    QVector<QString> cityNames; // Vector of city names.

    // Adds the names of the cities in the graph to the vector.
    for(int i = 0; i < graph.size(); i++)
    {
        cityNames.push_back(graph[i].city);
    }

    return cityNames;
}

QVector<QString> Graph::edges()
{
    QVector<QString> edgeList; // Vector of edges.

    // Adds the edges in the graph to the vector if the node has edges.
    for(int i = 0; i < graph.size(); i++)
    {
        if(graph.at(i).edgeList.size() != 0)
        {
            // Pushes the edge pair onto the vector in (u, v) format.
            for(int j = 0; j < graph.at(i).edgeList.size(); j++)
            {
                edgeList.push_back("(" + graph.at(i).edgeList.at(j).u + ", "
                                       + graph.at(i).edgeList.at(j).v + ")");
            }
        }
    }

    return edgeList;
}

int Graph::DFS(QString startingCity, QVector<QString> &dfs)
{
    // Gets the graph index of the vertex being visited.
    int currVertex = findVertex(startingCity);

    // Visits the vertex.
    graph[currVertex].visited = true;

    // Searches the vector of visited vertices for the city being visited.
    QVector<QString>::iterator nextCityIt = find(dfs.begin(), dfs.end(), startingCity);

    // Adds the vertex to the vector if it is not already in the vector.
    if(nextCityIt == dfs.end())
    {
        dfs.push_back(startingCity);
    }

    // Performs a recursive call on itself to visit all vertices in the graph.
    if(verticesVisited() != graph.size())
    {
        // Gets the graph index of the next closest city in the graph.
        int nextVertex = smallestEdgeDFS(currVertex, dfs);

        // Performs recursive call to visit the next closest city.
        DFS(graph.at(nextVertex).city, dfs);
    }

    return dfsDistance;
}

QVector<QString> Graph::getDiscoveryEdges(QVector<QString> &dfs)
{
    QVector<Edge> discEdges; // Vector of the discovery edges.

    // Adds the discovery edges to the vector in the order they were discovered.
    for(int i = 0; i < graph.size(); i++)
    {
        int dfsIndex = findVertex(dfs.at(i));

        for(int j = 0; j < graph.at(dfsIndex).edgeList.size(); j++)
        {
            // Only adds the edge to the vector if it is a discovery edge.
            if(graph.at(dfsIndex).edgeList.at(j).discoveryEdge)
            {
                discEdges.push_back(graph.at(dfsIndex).edgeList.at(j));
            }
        }
    }

    // Deletes edges with the same vertices to avoid duplicates.
    deleteDuplicates(discEdges);

    // Iterator to the beginning of the vector of discovery edges.
    QVector<Edge>::iterator edgeIt = discEdges.begin();

    QVector<QString> discoveryEdges; // Vector of discovery edge pairs.

    // Adds the discovery edges to the QString vector in (u, v) format.
    while(edgeIt != discEdges.end())
    {
        discoveryEdges.push_back("(" + edgeIt->u + ", " + edgeIt->v + ")");

        edgeIt++;
    }

    return discoveryEdges;
}

QVector<QString> Graph::getBackEdges(QVector<QString> &dfs)
{
    QVector<Edge> backEdges; // Vector of back edges.

    // Adds the back edges to the vector in the order they were discovered.
    for(int i = 0; i < graph.size(); i++)
    {
        int dfsIndex = findVertex(dfs.at(i));

        for(int j = 0; j < graph.at(dfsIndex).edgeList.size(); j++)
        {
            // Only adds the edge to the vector if it is a back edge.
            if(!(graph.at(dfsIndex).edgeList.at(j).discoveryEdge))
            {
                backEdges.push_back(graph.at(dfsIndex).edgeList.at(j));
                //QDebug() << "Added edge (" << graph.at(dfsIndex).edgeList.at(j).u << ", " << graph.at(dfsIndex).edgeList.at(j).v << ")\n";
            }
        }
    }

    // Deletes edges with the same vertices to avoid duplicates.
    deleteDuplicates(backEdges);

    // Iterator to the beginning of the vector of back edges.
    QVector<Edge>::iterator edgeIt = backEdges.begin();

    QVector<QString> backEdgeList; // Vector of back edge pairs.

    // Adds the back edges to the QString vector in (u, v) format.
    while(edgeIt != backEdges.end())
    {
        backEdgeList.push_back("(" + edgeIt->u + ", " + edgeIt->v + ")");

        edgeIt++;
    }

    return backEdgeList;
}

int Graph::smallestEdgeDFS(int currVertex, QVector<QString> &dfs)
{
    // Searches for the next closest edge if all edges of the current vertex have
    // not been visited yet, else backtracks to find a vertex whose edges have
    // not all been discovered.
    if(edgesDiscovered(currVertex) != graph.at(currVertex).edgeList.size())
    {
        // Edge list vertex of the closest city.
        int smallestIndex = 0;

        // Edge list vertex of the city whose distance is being compared to the
        // city at edgeList.at(smallestIndex).
        int compIndex = smallestIndex + 1;

        // Gets the size of the edgeList for the current vertex.
        int size = graph.at(currVertex).edgeList.size();

        // Finds the next closest city that has not been visited yet.
        while(compIndex < size)
        {
            // Gets the graph index of the next closest city.
            int smallestVertex = findVertex(graph.at(currVertex).edgeList.at(smallestIndex).v);

            // Gets the graph index of the city in the edge list being comapred
            // to the city at edgeList.at(smallestIndex).
            int compVertex = findVertex(graph.at(currVertex).edgeList.at(compIndex).v);

            // If the vertex at graph.at(smallestVertex) has already been visited,
            // increments smallest index and does nothing, else checks if the
            // vertex it is being compared to has been visited.
            if(graph.at(smallestVertex).visited)
            {
                smallestIndex++;
            }
            else
            {
                // If the vertex smallestVertex is being compared to has not been
                // visited, compares their weights, else does nothing.
                if(!(graph.at(compVertex).visited))
                {
                    if(graph.at(currVertex).edgeList.at(smallestIndex).weight >=
                       graph.at(currVertex).edgeList.at(compIndex).weight)
                    {
                        smallestIndex = compIndex;
                    }
                }
            }

            // Increments compIndex so that it is always the after smallestIndex.
            compIndex++;
        }

        // Marks the edge that has the smallest weight as a discovery edge.
        graph[currVertex].edgeList[smallestIndex].discoveryEdge = true;



        // Adds the distance to the overall distance traveled.
        dfsDistance += graph.at(currVertex).edgeList.at(smallestIndex).weight;

        // Gets the name of the city that is the closest to the current city.
        QString nextCity = graph.at(currVertex).edgeList.at(smallestIndex).v;

        // Finds the graph index of the closest city.
        smallestIndex = findVertex(nextCity);

        for(int i = 0; i < graph.at(smallestIndex).edgeList.size(); i++)
        {
            if(graph.at(currVertex).city == graph.at(smallestIndex).edgeList.at(i).v)
            {
                graph[smallestIndex].edgeList[i].discoveryEdge = true;
            }
        }

        return smallestIndex;
    }
    else
    {
        // Iterator that gets the location of the current city in the vector of
        // names that contains the cities in the order they were visited.
        QVector<QString>::iterator dfsIt = find(dfs.begin(), dfs.end(),
                                              graph.at(currVertex).city);

        // Decrements the iterator to the previous city visited.
        dfsIt--;

        // Finds the graph index of the previous city visited.
        int backIndex = findVertex(*dfsIt);

        // Preforms a recursive call to check if the previous city visited has
        // any unvisited edges to continue the DFS.
        return smallestEdgeDFS(backIndex, dfs);
    }
}

int Graph::BFS(QString startingCity, QVector<QString> &bfs)
{
    // Reset the graph, this should be its own function
    for (int i=0; i<graph.size(); i++) {
        graph[i].visited = false;
        for (int j=0; j< graph.at(i).edgeList.size(); j++)
            graph[i].edgeList[j].discoveryEdge = false;
    }

    // Get the graph index of the vertex being visited.
    int currVertex = findVertex(startingCity);

    // Visit the starting vertex
    graph[currVertex].visited = true;

    // Create a newLevel vector to hold the current level, containing only
    // the 1st vertex, and add the first vertex to the bfs vector
    QVector<int> newLevel;
    newLevel.push_back(currVertex);
    bfs.push_back(startingCity);

    // Start recursion
    return BFSRecur(bfs, newLevel);
}

int Graph::BFSRecur(QVector<QString> &bfs, QVector<int> previousLevel)
{
    QVector<int> newLevel;
    QVector<int> currLevel;
    int levelDistance = 0;

    QVector<Edge> *currEdgeList;
    Vertex *startingVertex;
    Vertex *currVertex;
    int currVertexID;

    // Iterate through the previous level
    for (int i=0; i<previousLevel.size(); i++) {
        startingVertex = &graph[previousLevel[i]];
        currEdgeList = &startingVertex->edgeList;

        // Iterate through the ith vertex's edge list
        for (int j=0; j<currEdgeList->size(); j++)
        {
            // Add all non-visited levels to the next level, in closest order
            currVertexID = findVertex(otherVertex(currEdgeList->at(j),startingVertex->city));
            currVertex = &graph[currVertexID];
            if (!currVertex->visited)
            {
                // Add the edge length to the distance, including return trip
                levelDistance += currEdgeList->at(j).weight;

                // Mark the vertex as visited and the edge as a discovery edge
                currVertex->visited = true;
                startingVertex->edgeList[j].discoveryEdge = true;

                // Also mark the reverse edge as a discovery edge
                for(int i = 0; i < currVertex->edgeList.size(); i++)
                {
                    if(currVertex->edgeList.at(i).v == startingVertex->city)
                        currVertex->edgeList[i].discoveryEdge = true;
                }

                // Insert the current vertex in the sorted position
                bool inserted = false; // could do the same thing by changing the visited variable, but this is clearer
                for (int k=0; k<currLevel.size() && !inserted; k++)
                {
                    if (currEdgeList->at(j).weight < distance(startingVertex, &graph[currLevel[k]]))
                    {
                        currLevel.insert(currLevel.begin()+k,currVertexID);
                        inserted = true;
                    }
                }
                if (!inserted)
                    currLevel.push_back(findVertex(currVertex->city));
            }
        }

        // Add the current level vertices to the the end of the bfs vector
        for (int m=0; m<currLevel.size(); m++) {
            bfs.push_back(graph.at(currLevel.at(m)).city);
        }

        // Add the current level vertices to the end of the newLevel vector
        for(int i = 0; i < currLevel.size(); i++)
        {
            newLevel.push_back(currLevel[i]);
        }

        // INSERT NOT WORKING
//        newLevel.insert(newLevel.end(), currLevel.begin(), currLevel.end());

        currLevel.clear();
    }

    // If still has vertices, do recursive call
    if (newLevel.size() > 0)
        return levelDistance + BFSRecur(bfs, newLevel);
    else
        return levelDistance;
}

int Graph::distance(Vertex * v1, Vertex * v2)
{
    // find connecting edge
    for (int i=0; i<v1->edgeList.size(); i++) {
        if (v1->edgeList.at(i).u == v2->city || v1->edgeList.at(i).v == v2->city)
            return v1->edgeList.at(i).weight;
    }
    return -1;
}

QString Graph::otherVertex(Edge currEdge, QString startingCity)
{
    if(currEdge.u == startingCity)
        return currEdge.v;
    else
        return currEdge.u;
}

int Graph::verticesVisited()
{
    int numVisited = 0; // Number of vertices visited.

    // Iterator to the first vertex in the graph.
    QVector<Vertex>::iterator graphIt = graph.begin();

    // Counts the number of vertices in the graph that are marked as visited.
    while(graphIt != graph.end())
    {
        if(graphIt->visited)
        {
            numVisited++;
        }

        graphIt++;
    }

    return numVisited;
}

int Graph::edgesDiscovered(int currVertex)
{
    int numVisited = 0; // Number of edges discovered.

    // Counts the number of edges at the current vertex that have been discovered.
    for(int i = 0; i < graph.at(currVertex).edgeList.size(); i++)
    {
        if(graph.at(findVertex(graph.at(currVertex).edgeList.at(i).v)).visited)
        {
            numVisited++;
        }
    }

    return numVisited;
}

void Graph::deleteDuplicates(QVector<Edge> &edgeList)
{
    QVector<Edge>::iterator listIt = edgeList.begin();

    // Traverses the list of edges to delete pairs that are the same.
    while(listIt != edgeList.end())
    {
        QVector<Edge>::iterator compIt = listIt + 1;

        bool deleted = false;

        // Deletes the first instance of an edge that has the same pair as
        // the edge pointed to by listIt.
        while(compIt != edgeList.end() && !deleted)
        {
            if(listIt->u == compIt->v && listIt->v == compIt->u)
            {
                edgeList.erase(compIt);

                deleted = true;
            }
            else
            {
                compIt++;
            }
        }

        listIt++;
    }
}
