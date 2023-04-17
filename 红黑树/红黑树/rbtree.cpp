#define _CRT_SECURE_NO_WARNINGS 1 

#include"rbtree.h"
//����
void rbtree_rotate_left(rbtree* T, rbtree_node* x)
{
    // xΪ��ת��
    rbtree_node* y = x->right;          // ��yΪ��ת������ӽڵ�

    // ���ڵ�y����������Ϊ�ڵ�x�������� 
    x->right = y->left;
    if (y->left != T->nil)
    {
        y->left->parent = x;
    }

    //���ڵ�y����ڵ�x��λ�ã����ڵ�x�ĸ��ڵ�ָ��ڵ�x��ָ��ָ��ڵ�y 
    y->parent = x->parent;
    if (x == T->root)          // �ڵ�xΪ���ڵ�
    {
        T->root = y;
    }
    else if (x == x->parent->left)          // �ڵ�xΪ���ڵ�����ӽڵ�
    {
        x->parent->left = y;
    }
    else          // �ڵ�xΪ���ڵ�����ӽڵ�
    {
        x->parent->right = y;
    }

    //���ڵ�x��Ϊ�ڵ�y�����ӽڵ� 
    y->left = x;
    x->parent = y;
}

/* ���� */
void rbtree_rotate_right(rbtree* T, rbtree_node* x)
{
    // xΪ��ת��
    rbtree_node* y = x->left;          // ��yΪ��ת������ӽڵ�

    /* ���ڵ�y����������Ϊ�ڵ�x�������� */
    x->left = y->right;
    if (y->right != T->nil)
    {
        y->right->parent = x;
    }

    /* ���ڵ�y����ڵ�x��λ�ã����ڵ�x�ĸ��ڵ�ָ��ڵ�x��ָ��ָ��ڵ�y */
    y->parent = x->parent;
    if (x == T->root)          // �ڵ�xΪ���ڵ�
    {
        T->root = y;
    }
    else if (x == x->parent->right)
    {
        x->parent->right = y;
    }
    else
    {
        x->parent->left = y;
    }

    //���ڵ�x��Ϊ�ڵ�y�����ӽڵ� */
    y->right = x;
    x->parent = y;
}
/* ���� */
void rbtree_insert(rbtree* T, rbtree_node* z)
{
    rbtree_node* x = T->root;
    rbtree_node* y = T->nil;
    /* �ҵ�����λ�� */
    while (x != T->nil)
    {
        y = x;      /* ����y��ָ�򣬱�֤yָ�����λ�õĸ��ڵ� */
        if (z->key > x->key)
            x = x->right;
        else if (z->key < x->key)
            x = x->left;
        else
            return;
    }

    z->parent = y;
    if (y == T->nil) {
        T->root = z;
    }
    else if (z->key < y->key)
        y->left = z;
    else
        y->right = z;

    /* ���²���ڵ���ӽڵ�ָ��Ҷ�ӽڵ� */
    z->left = T->nil;
    z->right = T->nil;
    // �ڵ�����Ϊ��ɫ
    z->color = RED;

    rbtree_insert_balance(T, z);
}
