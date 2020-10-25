typedef struct{
	void* root;
	TreeNode* left;
	TreeNode* right;
}TreeNode;

TreeNode* insert(TreeNode*, void*);

TreeNode* search(TreeNode*, void*);