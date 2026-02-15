#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Structure for adjacency list node
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};

// Structure for adjacency list
struct AdjList {
    struct AdjListNode* head;
};

// Structure for graph
struct Graph {
    int numVertices;
    struct AdjList* array;
};

// Function to create a new adjacency list node
struct AdjListNode* createNode(int dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with given vertices
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    
    // Create array of adjacency lists
    graph->array = (struct AdjList*)malloc(vertices * sizeof(struct AdjList));
    
    // Initialize each adjacency list as empty
    int i;
    for(i = 0; i < vertices; i++) {
        graph->array[i].head = NULL;
    }
    
    return graph;
}

// Function to add an edge to graph (undirected)
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct AdjListNode* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
    
    // Add edge from dest to src (since it's undirected)
    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Function to print the graph
void printGraph(struct Graph* graph) {
    int v;
    for(v = 0; v < graph->numVertices; v++) {
        struct AdjListNode* temp = graph->array[v].head;
        printf("Vertex %d: ", v);
        while(temp) {
            printf("-> %d ", temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Function for BFS traversal
void BFS(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;
    
    // Mark current as visited and enqueue
    visited[startVertex] = 1;
    queue[rear++] = startVertex;
    
    printf("BFS Traversal starting from vertex %d: ", startVertex);
    
    while(front < rear) {
        // Dequeue vertex and print
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);
        
        // Get all adjacent vertices
        struct AdjListNode* temp = graph->array[currentVertex].head;
        while(temp) {
            int adjVertex = temp->dest;
            if(!visited[adjVertex]) {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

// Function for DFS traversal
void DFSUtil(struct Graph* graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    
    struct AdjListNode* temp = graph->array[vertex].head;
    while(temp) {
        int adjVertex = temp->dest;
        if(!visited[adjVertex]) {
            DFSUtil(graph, adjVertex, visited);
        }
        temp = temp->next;
    }
}

void DFS(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};
    printf("DFS Traversal starting from vertex %d: ", startVertex);
    DFSUtil(graph, startVertex, visited);
    printf("\n");
}

int main() {
    // Create a graph with 5 vertices
    struct Graph* graph = createGraph(5);
    
    // Add edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    
    // Print the graph
    printf("Graph Representation (Adjacency List):\n");
    printGraph(graph);
    printf("\n");
    
    // Perform BFS and DFS
    BFS(graph, 0);
    DFS(graph, 0);
    
    // Find degree of vertices
    int i;
    printf("\nDegree of vertices:\n");
    for(i = 0; i < graph->numVertices; i++) {
        int degree = 0;
        struct AdjListNode* temp = graph->array[i].head;
        while(temp) {
            degree++;
            temp = temp->next;
        }
        printf("Vertex %d: %d\n", i, degree);
    }
    
    getchar(); // Pause to see output
    return 0;
}