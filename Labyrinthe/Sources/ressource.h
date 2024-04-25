#pragma once

#include <stdbool.h>

typedef struct Node Node;

struct Node {
	
	Node* next;
	bool visited;
	int weight;
};