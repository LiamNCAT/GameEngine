typedef struct{
	void* data;
	QueueNode* next;
} QueueNode;

QueueNode* enqueue(QueueNode*, void*);

void* dequeue(QueueNode*);