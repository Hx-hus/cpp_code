#define _CRT_SECURE_NO_WARNINGS 1 



BTNode* BinaryTreeFind(BTNode* root, BTDateType x)
{
	if (!root) return NULL;
	if (root->data == x) return root;
	BTNode* l = BinaryTreeFind(root->left, x);
	if (l) return l;
	BTNode* r = BinaryTreeFind(root->right, x);
	if (r) return r;
	return NULL;
}