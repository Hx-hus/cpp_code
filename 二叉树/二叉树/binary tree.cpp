#define _CRT_SECURE_NO_WARNINGS 1 

#include"binary tree.h"

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (*pi >= n || a[*pi] == '#') //�ж��Ƿ�Խ����ߵ���Ҷ�ӽ��
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

// ����������
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

// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) return 0;
	else return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// ������Ҷ�ӽڵ����
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

// ��������k��ڵ����
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

// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root->_data == x) return root;
	
	BinaryTreeFind(root->_left, x);

	BinaryTreeFind(root->_right, x);

	return NULL;
}

// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (!root) return;
	printf("%c->", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (!root) return;

	BinaryTreePrevOrder(root->_left);
	printf("%c->", root->_data);
	BinaryTreePrevOrder(root->_right);

}

// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (!root) return;

	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	printf("%c->", root->_data);

}

// �������
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

// �ж϶������Ƿ�����ȫ������
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