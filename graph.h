#ifndef GRAPH_H
#define GRAPH_H

#include <QString>
#include <QVector>
#include <QtAlgorithms>
using namespace std;

/**
 * @brief Edge Struct
 *
 * This struct represent an edge in the graph.
 */
struct Edge
{
    QString u; /**< Starting stadium. */
    QString v; /**< Ending stadium. */
    bool discoveryEdge; /**< Whether or not edge is a discovery edge. */
    int weight; /**< Distance between the two stadiums. */

    /**
     * @brief Default constructor.
     */
    Edge()
    {
        u = "";
        v = "";
        discoveryEdge = false;
        weight = 0;
    }
};

/**
 * @brief Vertex Struct
 *
 * This struct represent a vertex in the graph.
 */
struct Vertex
{
    QString stadium; /**< Name of the stadium in the vertex. */
    bool visited; /**< Whether or not the vertex has already been visited. */
    QVector<Edge> edgeList; /**<  List of incident edges. */

    /**
     * @brief Default constructor.
     */
    Vertex()
    {
        stadium = "";
        visited = false;
    }
};

/**
 * @brief Graph Class
 *
 * This class utilizes a QVector of Vertex objects each containing a QVector of
 * Edges in order to represent the Graph ADT using an adjacency list.
 */
class Graph
{
public:
    /**
     * @brief Default constructor
     */
    Graph();

    /**
     * @brief Destructor
     */
    ~Graph();

    /**
     * @brief Returns true if the graph is empty, else returns false.
     */
    bool empty();

    /**
     * @brief Returns the number of vertices in the graph.
     * @return graph.size()
     */
    int size();

    /**
     * @brief initializeGraph initializes the graph with the edges stored in the database.
     */
    void initializeGraph();

    /**
     * @brief Inserts a vertex to the graph with the specified stadium name.
     * @param stadium - Name of the stadium.
     */
    void insertVertex(QString stadium);

    /**
     * @brief Returns the graph index of the specified stadium.
     * @param stadium - Name of the stadium whose graph index is needed.
     * @return Graph index of the specified stadium.
     */
    int findVertex(QString stadium);

    /**
     * @brief insertEdge Adds a new edge to the graph AND creates a new vertex if a vertex
     *        with the value "u" does not yet exist.
     * @param u - Starting stadium
     * @param v - Ending stadium
     * @param weight - Distance between the stadiums
     */
    void insertEdge(QString u, QString v, int weight);

    /**
     * @brief Returns a list of the vertices in the graph.
     * @return QVector of vertices
     */
    QVector<QString> vertices();

    /**
     * @brief Returns a list of the edges in the graph.
     * @return QVector of edges in (u, v) format.
     */
    QVector<QString> edges();

    /**
     * @brief Performs a depth-first search on the graph starting at the
     *        indicated stadium and uses recursion to visit all other stadiums
     *        in the most efficient order.
     * @param startingStadium - Stadium where DFS will begin
     * @param dfs - QVector of stadium names in the order they were visited.
     * @return Total distance traveled on DFS discovery edges.
     */
    int DFS(QString startingStadium, QVector<QString> &dfs);

    /**
     * @brief Performs a recursive breadth-first search on the graph starting at the
     *        indicated stadium.
     * @param startingStadium - Stadium where the BFS will begin
     * @param bfs - QVector of stadium names in the order they were visited.
     * @return Total distance traveled on BFS discovery edges.
     */
    int BFS(QString startingStadium, QVector<QString> &bfs);

    // Determines the shortest path from the starting vertex "s" and all other
    // vertices in the graph.
    // PRE-CONDITIONS:
    // startingStadium - Starting city "s" must be defined.
    // T - Vector of vertices that have been visited.
    // costs[] - Array of costs of each vertex from "s".
    // parent[] - Array storing the parents of all visited vertices.
    void shortestPathsDijkstra(QString startingStadium, QVector<QString> &T,
                               int costs[], int parent[]);

    // Returns the shortest path from start to end.
    // PRE-CONDITIONS:
    // start - Starting city must be defined.
    // end - Destination city must be defined.
    // parent - Array of parents must be defined.
    QVector<QString> returnPath(QString start, QString end, int parent[]);

    /**
     * @brief Determines the minimum spanning tree of the graph using Prim-Jarnik's Algorithm.
     * @param startingStadium - Stadium where MST will begin
     * @param mst - QVector of stadium names in the order they were visited during MST.
     * @return Total mileage of MST.
     */
    int primJarnikMST(QString startingStadium, QVector<QString> &mst);

private:
    /*******************
     * PRIVATE METHODS *
     *******************/

    /**
     * @brief Finds the closest vertex to the current vertex and returns its graph index.
     * @param currVertex - Graph index of the current vertex.
     * @param dfs - Vector of cities visited during DFS.
     * @return Graph index of closest adjacent stadium.
     */
    int smallestEdgeDFS(int currVertex, QVector<QString> &dfs);

    /**
     * @brief When called by BFS(), carries out the recursive breadth-first search, continuing
     *        from each of the cities from previousLevel
     * @param bfs - Vector of stadium names in the order they were visited during DFS
     * @param previousLevel - the graph positions of all the cities visited in the previous level
     * @return Distance traveled on discovery edges to the newly discovered vertices
     */
    int BFSRecur(QVector<QString> &bfs, QVector<int> previousLevel);

    /**
     * @brief Returns the stadium name of the vertex in an edge that is not startingStadium
     * @param currEdge - Edge in question that contains startingStadium and the stadium to be found
     * @param startingStadium - stadium name of the vertex opposite of the stadium to be found.
     * @return stadium name of vertex in an edge that is not startingStadium
     */
    QString otherVertex(Edge currEdge, QString startingStadium);

    /**
     * @brief Returns the distance between two vertices
     * @param v1 - Starting stadium
     * @param v2 - Ending stadium
     * @return distance between v1 and v2
     */
    int distance(Vertex * v1, Vertex * v2);

    // Determines the next closest vertex to all previously discovered vertices
    // by calculating their distance from the "s".
    // PRE-CONDITIONS:
    // T - Vector of vertices that have been visited.
    // costs[] - Array of costs of each vertex from "s".
    // parent[] - Array storing the parents of all visited vertices.
    void findClosest(QVector<QString> &T, int costs[], int parent[]);

    // Returns the distance of a vertex from "s".
    // PRE-CONDITIONS:
    // city - Name of city whose distance from "s" will be found.
    // costs[] - Array of costs of each vertex from "s".
    // parent[] - Array storing the parents of all visited vertices.
    int distanceFromStart(QString city, int costs[], int parent[]);

    /**
     * @brief Finds the smallest edge from all of the previously visited vertices
     *        and returns its graph index.
     * @param mst - QVector of stadiums previously visited while determining MST
     * @return Graph index of the vertex closest to all previously discovered vertices.
     */
    int smallestEdgeMST(QVector<QString> &mst);

    /**
     * @brief Returns the graph index of the closest edge of the indicated vertex.
     * @param vertex - Vertex whose edge list will be traversed to find the closest
     *                 unvisted edge.
     * @return Graph index of the closest unvisited edge to vertex.
     */
    int smallestEdge(int vertex);

    /**
     * @brief distanceBetween returns the distance between two vertices
     * @param v1 - Starting vertex
     * @param v2 - Ending vertex
     * @return distance between v1 and v2
     */
    int distanceBetween(int v1, int v2);

    /**
     * @brief Returns the number of vertices that have been visited.
     * @return number of vertices visited.
     */
    int verticesVisited();

    /**
     * @brief Returns the number of edges discovered from the specified vertex.
     * @param currVertex - Graph index of the vertex whose visited edges will be checked.
     * @return number of adjacent edges that have been visited.
     */
    int edgesDiscovered(int currVertex);

    /**
     * @brief Marks all vertices as unvisited and edges as undiscovered.
     */
    void resetGraph();

    /************************
     * PRIVATE DATA MEMBERS *
     ************************/

    QVector<Vertex> graph; /**< Vector of Vertex objects used to represent a graph. */

    int dfsDistance; /**< Distance traveled during DFS. */

    int mstDistance; /**< Distance traveled while determining MST. */
};

#endif
