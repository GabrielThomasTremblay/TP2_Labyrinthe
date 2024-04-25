#pragma once

#include <stdbool.h>

typedef struct Node Node;
typedef struct Graph Graph;

struct Node {
	
	
	Node* next;
	Node* adj[4];
	bool visited;
	int weight;
};

struct Graph{

	int numVertices;
	Node** adjlists;
};