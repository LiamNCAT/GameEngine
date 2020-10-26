template <typename T>
class BST{
private:
	struct Node{
		T data;
		TreeNode* left;
		TreeNode* right;
	}
	Node* root;
public:
	BST();
	void insert(T);
	void search(T);
	void delete(T);
	bool empty();
}