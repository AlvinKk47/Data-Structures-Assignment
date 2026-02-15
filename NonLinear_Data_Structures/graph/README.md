text

\# Graph Implementation in C



\## Code Overview

This program implements a graph using adjacency list representation.



\## Operations Demonstrated

\- Graph creation

\- Adding edges

\- BFS (Breadth First Search) traversal

\- DFS (Depth First Search) traversal

\- Finding degree of vertices



\## Code Explanation

```c

struct AdjListNode {

&nbsp;   int dest;

&nbsp;   struct AdjListNode\* next;

};



struct Graph {

&nbsp;   int numVertices;

&nbsp;   struct AdjList\* array;  // Array of adjacency lists

};



// BFS uses queue for traversal

// DFS uses recursion (stack)

How to Compile and Run

bash

gcc Graph.c -o graph

./graph

Sample Output

text

Graph Representation (Adjacency List):

Vertex 0: -> 2 -> 1 

Vertex 1: -> 3 -> 2 -> 0 

Vertex 2: -> 3 -> 1 -> 0 

Vertex 3: -> 4 -> 2 -> 1 

Vertex 4: -> 3 



BFS Traversal starting from vertex 0: 0 2 1 3 4 

DFS Traversal starting from vertex 0: 0 1 2 3 4 



Degree of vertices:

Vertex 0: 2

Vertex 1: 3

Vertex 2: 3

Vertex 3: 3

Vertex 4: 1

Time Complexity

Add Edge: O(1)



BFS/DFS: O(V + E) where V = vertices, E = edges



Find Degree: O(degree of vertex)



Space Complexity

O(V + E) for adjacency list



Real-World Applications

Google Maps (shortest path)



Social networks (friend connections)



Network routing



Airline flight networks

