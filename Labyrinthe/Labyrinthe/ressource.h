#pragma once

#include <stdbool.h>

typedef struct Node Node;

struct Node {
	
	Node* next;
	Node* prev;
	bool visited;
	int weight;
};