template<typename T>
class Stack{
private:
	struct Node{
		T data;
		Node* next;
	};
	Node* top;
public:
	Stack();
	void push(T);
	void pop();
	T peak();
}