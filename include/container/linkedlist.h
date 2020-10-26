template<typename T>
class LinkedList{
private:
	struct Node{
		T data;
		Node* next;
	};
	Node* first;
public:
	LinkedList();
	void insert(T);
	bool contains(T);
	bool empty();
	void delete(T);
}