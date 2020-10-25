typedef struct{
	void* data;
	StackNode* next;
} StackNode;

void push(StackNode*, void*);

void* pop();

void* peak();