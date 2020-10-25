typedef struct{
	void* data;
	ListNode* next;
}ListNode;

void insert(ListNode*, void*);

ListNode* search(ListNode*, void*);

void delete(ListNode*, void*);