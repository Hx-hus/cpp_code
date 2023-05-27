#define _CRT_SECURE_NO_WARNINGS 1 

#include"binary tree.h"

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (*pi >= n || a[*pi] == '#') //判断是否越界或者到达叶子结点
	{
		(*pi)++;
		return NULL;
	}

	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	
	node->_data = a[*pi];
	(*pi)++;

	node->_left = BinaryTreeCreate(a, n, pi);
	node->_right = BinaryTreeCreate(a, n, pi);

	return node;
}

// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root)
	{
		BinaryTreeDestory(&(*root)->_left);
		BinaryTreeDestory(&(*root)->_right);

		free(*root);
		*root = NULL;
	}
}

// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) return 0;
	else return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (!root) return 0;
	static int count = 0;
	if (root->_left == NULL && root->_right == NULL)
		count++;
	BinaryTreeLeafSize(root->_left);
	BinaryTreeLeafSize(root->_right);

	return count;
}	

// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL || k < 1) 
	{
		return 0;
	}
	if (k == 1) 
	{
		return 1;
	}
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root->_data == x) return root;
	
	BinaryTreeFind(root->_left, x);

	BinaryTreeFind(root->_right, x);

	return NULL;
}

// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (!root) return;
	printf("%c->", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (!root) return;

	BinaryTreePrevOrder(root->_left);
	printf("%c->", root->_data);
	BinaryTreePrevOrder(root->_right);

}

// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (!root) return;

	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	printf("%c->", root->_data);

}

// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	std::queue<BTNode*> qu;
	BTNode* tmp;
	
	qu.push(root);
	while (qu.size())
	{
		tmp = qu.front();
		qu.pop();
		printf("%c->", tmp->_data);
		if (tmp->_left) qu.push(tmp->_left);
		if (tmp->_right) qu.push(tmp->_right);
	}
}

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	std::queue<BTNode*> qu;
	BTNode* tmp;
	int ans = 0;

	qu.push(root);
	while (qu.size())
	{
		tmp = qu.front();
		qu.pop();
		printf("%c->", tmp->_data);
		if (!tmp->_left && tmp->_right) return 0;
		if (ans && (tmp->_left || tmp->_right)) return 0;
		if (tmp->_left) qu.push(tmp->_left);
		if (tmp->_right) qu.push(tmp->_right);
		ans = 1;
	}
	return  1;
}