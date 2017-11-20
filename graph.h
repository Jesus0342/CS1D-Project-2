#ifndef GRAPH_H
#define GRAPH_H

#include <QString>
#include <QVector>
#include <QtAlgorithms>
using namespace std;

// Struct representing an edge in the graph.
struct Edge
{
    QString u; // Starting city.
    QString v; // Ending city.
    bool discoveryEdge; // Whether or not edge is a discovery edge.
    int weight; // Distance between the cities.

    // Edge object constructor.
    Edge()
    {
        u = "";
        v = "";
        discoveryEdge = false;
        weight = 0;
    }
};

// Struct representing a vertex in the graph.
struct Vertex
{
    QString city; // Name of the city in the vertex.
    bool visited; // Whether or not the vertex has already been visited.
    QVector<Edge> edgeList; // List of incident edges.

    // Vertex object constructor.
    Vertex()
    {
        city = "";
        visited = false;
    }
};

// Graph class that uses an adjacency list to store edges.
class Graph
{
public:
    Graph();
    ~Graph();

    // Returns true if the graph is empty, else returns false.
    bool empty();

    // Returns the number of vertices in the graph.
    int size();

    // Reads the edges from a text file and adds them to the graph.
    // POST-CONDITION: The graph will be filled with the values in the text file.
    void initializeGraph();

    // Inserts a vertex to the graph with the specified city name.
    // PRE-CONDITIONS:
    // city - City name of new vertex must be defined.
    // POST-CONDITION: A new vertex is added to the graph.
    void insertVertex(QString city);

    // Returns the graph index of the specified city.
    // PRE-CONDITIONS:
    // city - Name of city to be searched for must be defined.
    int findVertex(QString city);

    // Adds a new edge to the graph and a new vertex if a vertex with value "u"
    // does not yet exist.
    // PRE-CONDITIONS:
    // u - Starting city must be defined.
    // v - Ending city must be defined.
    // weight - Distance between the cities must be defined.
    // POST-CONDITION: A new edge is added to the edge list of vertex "u".
    void insertEdge(QString u, QString v, int weight);

    // Returns a list of the vertices in the graph.
    QVector<QString> vertices();

    // Returns a list of the edges in the graph.
    QVector<QString> edges();

    // Performs a depth-first search on the graph starting at the indicated city
    // using recursion.
    // PRE-CONDITIONS:
    // startingCity - City where the DFS will begin must be defined.
    // dfs - Vector of city names in the order they were visited during DFS does
    //		 not have to be defined.
    // POST-CONDITION: The list of cities visited in the DFS order is returned.
    int DFS(QString startingCity, QVector<QString> &dfs);

    // Returns a list of the discovery edges created during the DFS.
    // PRE-CONDITIONS:
    // dfs - Vector of city names in the order they were visited during DFS must
    // 		 be defined.
    QVector<QString> getDiscoveryEdges(QVector<QString> &dfs);

    // Returns a list of the back edges created by the DFS.
    // PRE-CONDITIONS:
    // dfs - Vector of city names in the order they were visited during DFS must
    // 		 be defined.
    QVector<QString> getBackEdges(QVector<QString> &dfs);

    // Performs a recursive breadth-first search on the graph starting at the
    // indicated city.
    // PRE-CONDITIONS:
    // startingCity - City where the BFS will begin must be defined.
    // bfs - Vector of city names in the order they were visited during DFS does
    //		 not have to be defined.
    // POST-CONDITION: The bfs vector is modified to include the city names in BFS order.
    int BFS(QString startingCity, QVector<QString> &bfs);

private:
    // Finds the closest vertex to the current vertex and returns its graph index.
    // PRE-CONDITIONS:
    // currVertex - Index of the current vertex must be defined.
    // dfs - Vector of cities visited during DFS must be defined.
    int smallestEdgeDFS(int currVertex, QVector<QString> &dfs);

    // Returns the number of vertices that have been visited.
    int verticesVisited();

    // Returns the number of edges discovered from the specified vertex.
    // PRE-CONDITIONS:
    // currVertex - Graph index of the current vertex must be defined.
    int edgesDiscovered(int currVertex);

    // Deletes edge pairs that have the same u & v.
    // If (u, v) already exists, all (v, u) edge pairs will be deleted.
    void deleteDuplicates(QVector<Edge> &edgeList);

    QVector<Vertex> graph; // Vector of vertices used to represent a graph.

    int dfsDistance; // Distance traveled during DFS.

    // When called by BFS(), carries out the recursive breadth-first search,
    // continuing from each of the cities from previousLevel
    // PRE-CONDITIONS:
    // bfs - Vector of city names in the order they were visited during DFS does
    //		 not have to be defined.
    // previousLevel: the graph positions of all the cities visited in the previous level
    // POST-CONDITION: The bfs vector is modified to include the city names in BFS order.
    int BFSRecur(QVector<QString> &bfs, QVector<int> previousLevel);

    // Returns the city name of the vertex in an edge that is not startingCity
    // PRE-CONDITIONS:
    // currEdge - Edge in question that contains startingCity and the city to be found
    // startingCity - city name of the vertex opposite of the city to be found
    QString otherVertex(Edge currEdge, QString startingCity);

    // Returns the distance between two vertices
    // PRE-CONDITIONS:
    // v1, v2 - the vertices to find the distance between
    int distance(Vertex * v1, Vertex * v2);
};

#endif
