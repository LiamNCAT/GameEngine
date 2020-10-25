#include <container\linkedlist.h>

void insert(ListNode* node, void* data){
	if(node == NULL){
		node = malloc(sizeof ListNode);
		
		node->data = data;
		node->next = null;
		
	}
	
	ListNode* n = node;
	
	while(n->next != NULL){
		n = n->next;
	}
	
	Node new = malloc(sizeof Node);
	n->next = new;
}

ListNode* search(ListNode* node, void* data){
	if(node == NULL) return NULL;
	
	ListNode* n = node;
	
	while(n->data != data){
		n = n->next;
	}
	
	return n;
}


void delete(ListNode* node, void* data){
	
	if(node == NULL) return;		
	ListNode* n = node;
	
	ListNode* prev;
	
	while(n->data != data){
		prev = n;
		n = n->next;
	}
	
	prev->next = n->next;
	n->next = NULL;
	
	free(n);
}