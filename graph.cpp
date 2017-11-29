#include "graph.h"
#include "database.h"
#include <QDebug>

Graph::Graph()
{
    initializeGraph();
    
    dfsDistance = 0;

    mstDistance = 0;
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
    QVector<Edge> edges = Database::returnGraphEdges();

    for(int i = 0; i < edges.size(); i++)
    {
        insertEdge(edges[i].u, edges[i].v, edges[i].weight);
    }
}

int Graph::findVertex(QString stadium)
{
    int index = 0;
    bool found = false;

    // Searches for the stadium in the graph and returns the index of the graph it
    // was found, else returns the size of the graph.
    while(index < graph.size() && !found)
    {
        if(graph.at(index).stadium == stadium)
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

void Graph::insertVertex(QString stadium)
{
    // Adds the vertex to the graph if it does not yet exist.
    if(findVertex(stadium) == graph.size())
    {
        Vertex newVertex;

        newVertex.stadium = stadium;
        newVertex.visited = false;

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
    QVector<QString> stadiumNames; // Vector of stadium names.

    // Adds the names of the cities in the graph to the vector.
    for(int i = 0; i < graph.size(); i++)
    {
        stadiumNames.push_back(graph[i].stadium);
    }

    return stadiumNames;
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

int Graph::DFS(QString startingStadium, QVector<QString> &dfs)
{
    // Reset the graph, this should be its own function
    if(verticesVisited() == graph.size())
    {
        for (int i=0; i<graph.size(); i++)
        {
            graph[i].visited = false;
            for (int j=0; j< graph.at(i).edgeList.size(); j++)
            {
                graph[i].edgeList[j].discoveryEdge = false;
            }
        }
        
        dfsDistance = 0;
    }

    // Gets the graph index of the vertex being visited.
    int currVertex = findVertex(startingStadium);

    // Visits the vertex.
    graph[currVertex].visited = true;

    // Searches the vector of visited vertices for the stadium being visited.
    QVector<QString>::iterator nextStadiumIt = find(dfs.begin(), dfs.end(), startingStadium);

    // Adds the vertex to the vector if it is not already in the vector.
    if(nextStadiumIt == dfs.end())
    {
        dfs.push_back(startingStadium);
    }

    // Performs a recursive call on itself to visit all vertices in the graph.
    if(verticesVisited() != graph.size())
    {
        // Gets the graph index of the next closest stadium in the graph.
        int nextVertex = smallestEdgeDFS(currVertex, dfs);

        // Performs recursive call to visit the next closest stadium.
        DFS(graph.at(nextVertex).stadium, dfs);
    }

    return dfsDistance;
}

int Graph::BFS(QString startingStadium, QVector<QString> &bfs)
{
    // Reset the graph, this should be its own function
    if(verticesVisited() == graph.size())
    {
        for (int i=0; i<graph.size(); i++)
        {
            graph[i].visited = false;
            for (int j=0; j< graph.at(i).edgeList.size(); j++)
            {
                graph[i].edgeList[j].discoveryEdge = false;
            }
        }
    }

    // Get the graph index of the vertex being visited.
    int currVertex = findVertex(startingStadium);

    // Visit the starting vertex
    graph[currVertex].visited = true;

    // Create a newLevel vector to hold the current level, containing only
    // the 1st vertex, and add the first vertex to the bfs vector
    QVector<int> newLevel;
    newLevel.push_back(currVertex);
    bfs.push_back(startingStadium);

    // Start recursion
    return BFSRecur(bfs, newLevel);
}

void Graph::shortestPathsDijkstra(QString startingStadium, QVector<QString> &T, int costs[], int parent[])
{
    // Reset the graph, this should be its own function
    if(verticesVisited() == graph.size())
    {
        for (int i=0; i<graph.size(); i++)
        {
            graph[i].visited = false;

            for (int j=0; j< graph.at(i).edgeList.size(); j++)
            {
                graph[i].edgeList[j].discoveryEdge = false;
            }
        }
    }

    // Returns the graph vertex of the starting city "s".
    int currVertex = findVertex(startingStadium);

    // Adds "s" to T.
    T.push_back(graph[currVertex].stadium);

    // Sets the cost of "s" to 0 and its parent to -1.
    costs[currVertex] = 0;
    parent[currVertex] = -1;

    // Marks "s" as visited.
    graph[currVertex].visited = true;

    // Finds the next closest vertex to the vertices in the graph until all
    // vertices have been added to T.
    while(T.size() != size())
    {
        findClosest(T, costs, parent);
    }
}

QVector<QString> Graph::returnPath(QString start, QString end, int parent[])
{
    // Vector of the names of the cities in the path from start to end.
    QVector<QString> path;

    // Returns the graph index of end.
    int vertex = findVertex(end);

    // Pushes the parent of the current vertex onto the path vector until
    // "s" is reached.
    while(parent[vertex] != -1)
    {
        path.push_back(graph[vertex].stadium);

        vertex = parent[vertex];
    }

    // Adds "s" to the path vector.
    path.push_back(graph[vertex].stadium);

    // Reverese the path vector so that "s" is first and end is last.
    reverse(path.begin(), path.end());

    return path;
}

int Graph::primJarnikMST(QString startingStadium, QVector<QString> &mst)
{
    // Reset the graph, this should be its own function
    if(verticesVisited() == graph.size())
    {
        for (int i=0; i<graph.size(); i++)
        {
            graph[i].visited = false;

            for (int j=0; j< graph.at(i).edgeList.size(); j++)
            {
                graph[i].edgeList[j].discoveryEdge = false;
            }
        }

        mstDistance = 0;
    }

    // Gets the graph index of the vertex being visited.
    int currVertex = findVertex(startingStadium);

    // Visits the vertex.
    graph[currVertex].visited = true;

    // Adds the vertex to the MST vector.
    mst.push_back(startingStadium);

    // Performs a recursive call on itself to visit all vertices in the graph.
    if(mst.size() != size())
    {
        // Gets the graph index of the next closest stadium in the graph.
        int nextVertex = smallestEdgeMST(mst);

        // Performs recursive call to visit the next closest stadium.
        primJarnikMST(graph.at(nextVertex).stadium, mst);
    }

    return mstDistance;
}

int Graph::smallestEdgeMST(QVector<QString> &mst)
{
    // Finds the closest stadium to the root if it is the only vertex in T, else
    // finds the edge with the smallest weight among the edges adjacent to T.
    if(mst.size() == 1)
    {
        // Graph vertex of the stadium closest to the root.
        int smallestVertex = smallestEdge(findVertex(mst.front()));

        // Accumulates total distance.
        mstDistance += distanceBetween(findVertex(mst.front()), smallestVertex);

        // Prints the edge.
//        qDebug() << "(" << mst.front() << ", " << graph[smallestVertex].stadium << ")\n";

        return smallestEdge(findVertex(mst.front()));
    }
    else
    {
        // MST index of the stadium with the smallest edge and the index of the
        // stadium it is being compared to.
        int smallId = 0;
        int compId = smallId + 1;

        // Size of T.
        int size = mst.size();

        // Compares the smallest edge of smallId to all other smallest edges of
        // the cities in T.
        while(compId < size)
        {
            // Graph indexes of the stadium in MST with the smallest edge and stadium
            // it is being compared to.
            int smallVer = findVertex(mst[smallId]);
            int compVer = findVertex(mst[compId]);

            // Increments smallId to the next stadium in MST if all of the edges
            // of smallVer have already been visited, else checks if all the
            // edges of compVer have been visited.
            if(graph[smallVer].edgeList.size() == edgesDiscovered(smallVer))
            {
                smallId++;
            }
            else
            {
                // Compares the smallest edge of smallVer and compVer if compVer's
                // edges have not all been visited.
                if(graph[compVer].edgeList.size() != edgesDiscovered(compVer))
                {
                    // Distance between smallVer and its smallest edge.
                    int smallDist = distanceBetween(smallVer, smallestEdge(smallVer));

                    // Distance between compVer and its smallest edge.
                    int compDist =  distanceBetween(compVer, smallestEdge(compVer));

                    // Assigns compId to smallId if compVer has a smaller
                    // edge than the current smallest vertex.
                    if(smallDist > compDist)
                    {
                        smallId = compId;
                    }
                }
            }

            // Increments compId so that it is always at least 1 index ahead of
            // smallId.
            compId++;
        }

        // Accumulates the total MST distance.
        mstDistance += distanceBetween(findVertex(mst[smallId]), smallestEdge(findVertex(mst[smallId])));

        // Graph index of the stadium with the closest edge.
        int smallestVertex = findVertex(mst[smallId]);

        // Gets the name of the stadium that is the closest to the stadium with the
        // closest edge.
        QString nextStadium = graph.at(smallestEdge(smallestVertex)).stadium;

        // Prints the smallest edge (next edge to be visited).
//        qDebug() << "(" << mst[smallId] << ", " << nextStadium << ")\n";

        // Finds the graph index of the closest stadium.
        smallId = findVertex(nextStadium);

        return smallId;
    }
}

int Graph::smallestEdge(int vertex)
{
    // Edge list vertex of the closest stadium.
    int smallestIndex = 0;

    // Edge list vertex of the stadium whose distance is being compared to the
    // stadium at edgeList.at(smallestIndex).
    int compIndex = smallestIndex + 1;

    // Gets the size of the edgeList for the current vertex.
    int size = graph.at(vertex).edgeList.size();

    // Finds the next closest stadium that has not been visited yet.
    while(compIndex < size)
    {
        // Gets the graph index of the next closest stadium.
        int smallestVertex = findVertex(graph.at(vertex).edgeList.at(smallestIndex).v);

        // Gets the graph index of the stadium in the edge list being comapred
        // to the stadium at edgeList.at(smallestIndex).
        int compVertex = findVertex(graph.at(vertex).edgeList.at(compIndex).v);

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
                if(graph.at(vertex).edgeList.at(smallestIndex).weight >= graph.at(vertex).edgeList.at(compIndex).weight)
                {
                    smallestIndex = compIndex;
                }
            }
        }

        // Increments compIndex so that it is always the after smallestIndex.
        compIndex++;
    }

    // Finds the graph index of the closest stadium.
    smallestIndex = findVertex(graph.at(vertex).edgeList.at(smallestIndex).v);

    return smallestIndex;
}

int Graph::distanceBetween(int v1, int v2)
{
    int i = 0;

    // Finds v2 in v1's edge list.
    while(graph[v1].edgeList[i].v != graph[v2].stadium)
    {
        i++;
    }

    return graph[v1].edgeList[i].weight;
}

int Graph::smallestEdgeDFS(int currVertex, QVector<QString> &dfs)
{
    // Searches for the next closest edge if all edges of the current vertex have
    // not been visited yet, else backtracks to find a vertex whose edges have
    // not all been discovered.
    if(edgesDiscovered(currVertex) != graph.at(currVertex).edgeList.size())
    {
        // Edge list vertex of the closest stadium.
        int smallestIndex = 0;

        // Edge list vertex of the stadium whose distance is being compared to the
        // stadium at edgeList.at(smallestIndex).
        int compIndex = smallestIndex + 1;

        // Gets the size of the edgeList for the current vertex.
        int size = graph.at(currVertex).edgeList.size();

        // Finds the next closest stadium that has not been visited yet.
        while(compIndex < size)
        {
            // Gets the graph index of the next closest stadium.
            int smallestVertex = findVertex(graph.at(currVertex).edgeList.at(smallestIndex).v);

            // Gets the graph index of the stadium in the edge list being comapred
            // to the stadium at edgeList.at(smallestIndex).
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

        // Gets the name of the stadium that is the closest to the current stadium.
        QString nextStadium = graph.at(currVertex).edgeList.at(smallestIndex).v;

        // Finds the graph index of the closest stadium.
        smallestIndex = findVertex(nextStadium);

        for(int i = 0; i < graph.at(smallestIndex).edgeList.size(); i++)
        {
            if(graph.at(currVertex).stadium == graph.at(smallestIndex).edgeList.at(i).v)
            {
                graph[smallestIndex].edgeList[i].discoveryEdge = true;
            }
        }

        return smallestIndex;
    }
    else
    {
        // Iterator that gets the location of the current stadium in the vector of
        // names that contains the cities in the order they were visited.
        QVector<QString>::iterator dfsIt = find(dfs.begin(), dfs.end(),
                                              graph.at(currVertex).stadium);

        // Decrements the iterator to the previous stadium visited.
        dfsIt--;

        // Finds the graph index of the previous stadium visited.
        int backIndex = findVertex(*dfsIt);

        // Preforms a recursive call to check if the previous stadium visited has
        // any unvisited edges to continue the DFS.
        return smallestEdgeDFS(backIndex, dfs);
    }
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
            currVertexID = findVertex(otherVertex(currEdgeList->at(j),startingVertex->stadium));
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
                    if(currVertex->edgeList.at(i).v == startingVertex->stadium)
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
                    currLevel.push_back(findVertex(currVertex->stadium));
            }
        }

        // Add the current level vertices to the the end of the bfs vector
        for (int m=0; m<currLevel.size(); m++) {
            bfs.push_back(graph.at(currLevel.at(m)).stadium);
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
        if (v1->edgeList.at(i).u == v2->stadium || v1->edgeList.at(i).v == v2->stadium)
            return v1->edgeList.at(i).weight;
    }
    return -1;
}

QString Graph::otherVertex(Edge currEdge, QString startingStadium)
{
    if(currEdge.u == startingStadium)
        return currEdge.v;
    else
        return currEdge.u;
}

void Graph::findClosest(QVector<QString> &T, int costs[], int parent[])
{
    // Finds the closest city to the root if it is the only vertex in T, else
    // finds the edge with the smallest weight among the edges adjacent to T.
    if(T.size() == 1)
    {
        // Returns the graph index of "s".
        int frontVer = findVertex(T.front());

        // Returns the graph index of the closest vertex to "s".
        int nextVer = smallestEdge(frontVer);

        // Stores the cost and parent of the closest vertex.
        costs[nextVer] = distanceBetween(frontVer, nextVer);
        parent[nextVer] = frontVer;

        // Marks the closest vertex as visited.
        graph[nextVer].visited = true;

        // Adds the closest vertex to T.
        T.push_back(graph[nextVer].stadium);
    }
    else
    {
        // T index of the city with the smallest edge and the index of the
        // city it is being compared to.
        int smallId = 0;
        int compId = smallId + 1;

        // Smallest distance and comparison distance.
        int smallDist;
        int compDist;

        // Size of T.
        int size = T.size();

        // Compares the smallest edge of smallId to all other smallest edges of
        // the cities in T.
        while(compId < size)
        {
            // Graph indexes of the city in MST with the smallest edge and city
            // it is being compared to.
            int smallVer = findVertex(T[smallId]);
            int compVer = findVertex(T[compId]);

            // Increments smallId to the next city in T if all of the edges
            // of smallVer have already been visited, else checks if all the
            // edges of compVer have been visited.
            if(graph[smallVer].edgeList.size() == edgesDiscovered(smallVer))
            {
                smallId++;
            }
            else
            {
                // Compares the smallest edge of smallVer and compVer if compVer's
                // edges have not all been visited.
                if(graph[compVer].edgeList.size() != edgesDiscovered(compVer))
                {
                    // Distance between smallVer and its smallest edge.
                    smallDist = distanceBetween(smallVer, smallestEdge(smallVer))
                                + distanceFromStart(graph[smallVer].stadium, costs,
                                                    parent);

                    // Distance between compVer and its smallest edge.
                    compDist =  distanceBetween(compVer, smallestEdge(compVer))
                                + distanceFromStart(graph[compVer].stadium, costs,
                                                    parent);

                    // Assigns compId to smallId if compVer has a smaller
                    // edge than the current smallest vertex.
                    if(smallDist > compDist)
                    {
                        smallId = compId;

                        smallDist = compDist;
                    }
                }
            }

            // Increments compId so that it is always at least 1 index ahead of
            // smallId.
            compId++;
        }

        // Graph index of the city with the closest edge.
        int smallestVertex = smallestEdge(findVertex(T[smallId]));

        // Stores the cost and parent of the next closest vertex.
        costs[smallestVertex] = smallDist;
        parent[smallestVertex] = findVertex(T[smallId]);

        // Marks the next closest vertex as visited.
        graph[smallestVertex].visited = true;

        // Adds the next closest vertex to T.
        T.push_back(graph[smallestVertex].stadium);
    }

}

int Graph::distanceFromStart(QString city, int costs[], int parent[])
{
    // Distance accumulator.
    int distance = 0;

    // Graph index of the city whose distance from "s" will be found.
    int vertex = findVertex(city);

    // While vertex is not "s", finds the distance between the current vertex
    // and  its parent.
    while(costs[vertex] != 0)
    {
        // Accumulates distance.
        distance += distanceBetween(vertex, parent[vertex]);

        // Assigns the value of the parent of the current vertex to vertex.
        vertex = parent[vertex];
    }

    return distance;
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
