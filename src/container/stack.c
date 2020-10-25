#include <container\stack.h>

StackNode* push(StackNode* node, void* data){
	if(node == NULL){
		node = malloc(sizeof StackNode);
		node->data = data;
		node->next = NULL;
	}
}