template<typename T>
class Queue{
private:
	struct Node{
		T data;
		Node* next;
	};
	Node* front;
	Node* back;
public:
	Queue();
	bool empty();
	void enqueue(T);
	T dequeue();
	T front();
}