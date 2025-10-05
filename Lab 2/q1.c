#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

#define INF 999999
#define MAX_VERT 6

typedef struct Node {
    char *data;
    struct Node *next;
} Node;

// Initialize adjacency matrix
void init_matrix(int matrix[MAX_VERT][MAX_VERT]) {
    for (int i = 0; i < MAX_VERT; i++) {
        for (int j = 0; j < MAX_VERT; j++) {
            matrix[i][j] = (i == j) ? 0 : INF;
        }
    }
}

// Add weighted edge (undirected graph)
void add_edge(int matrix[MAX_VERT][MAX_VERT], int v1, int v2, int weight) {
    matrix[v1][v2] = weight;
    matrix[v2][v1] = weight;
}

// Print graph (adjacency matrix)
void printGraph(int graph[MAX_VERT][MAX_VERT]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < MAX_VERT; i++) {
        for (int j = 0; j < MAX_VERT; j++) {
            if (graph[i][j] == INF)
                printf("INF ");
            else
                printf("%3d ", graph[i][j]);
        }
        printf("\n");
    }
}

int graphBuilder() {
    int graph[MAX_VERT][MAX_VERT];
    init_matrix(graph);

    // Build a simple weighted graph with 6 vertices
    add_edge(graph, 0, 1, 7);  // A-B
    add_edge(graph, 0, 2, 9);  // A-C
    add_edge(graph, 0, 5, 14); // A-F
    add_edge(graph, 1, 2, 10); // B-C
    add_edge(graph, 1, 3, 15); // B-D
    add_edge(graph, 2, 3, 11); // C-D
    add_edge(graph, 2, 5, 2);  // C-F
    add_edge(graph, 3, 4, 6);  // D-E
    add_edge(graph, 4, 5, 9);  // E-F

    // Print the adjacency matrix
    printGraph(graph);

    return 0;
}


void dijkstra(int matrix[MAX_VERT][MAX_VERT], int noVert, int startVert) {
    bool visited[MAX_VERT] = {false};
    visited[startVert] = true;
    int d[MAX_VERT] = {INF};
    char* pi[MAX_VERT];

    // Find neighbour
    

    
}
