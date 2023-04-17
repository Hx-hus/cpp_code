#define _CRT_SECURE_NO_WARNINGS 1 

#include"rbtree.h"
//左旋
void rbtree_rotate_left(rbtree* T, rbtree_node* x)
{
    // x为旋转点
    rbtree_node* y = x->right;          // 令y为旋转点的右子节点

    // 将节点y的左子树变为节点x的右子树 
    x->right = y->left;
    if (y->left != T->nil)
    {
        y->left->parent = x;
    }

    //将节点y顶替节点x的位置，即节点x的父节点指向节点x的指针指向节点y 
    y->parent = x->parent;
    if (x == T->root)          // 节点x为根节点
    {
        T->root = y;
    }
    else if (x == x->parent->left)          // 节点x为父节点的左子节点
    {
        x->parent->left = y;
    }
    else          // 节点x为父节点的右子节点
    {
        x->parent->right = y;
    }

    //将节点x变为节点y的左子节点 
    y->left = x;
    x->parent = y;
}

/* 右旋 */
void rbtree_rotate_right(rbtree* T, rbtree_node* x)
{
    // x为旋转点
    rbtree_node* y = x->left;          // 令y为旋转点的左子节点

    /* 将节点y的右子树变为节点x的左子树 */
    x->left = y->right;
    if (y->right != T->nil)
    {
        y->right->parent = x;
    }

    /* 将节点y顶替节点x的位置，即节点x的父节点指向节点x的指针指向节点y */
    y->parent = x->parent;
    if (x == T->root)          // 节点x为根节点
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

    //将节点x变为节点y的左子节点 */
    y->right = x;
    x->parent = y;
}
/* 插入 */
void rbtree_insert(rbtree* T, rbtree_node* z)
{
    rbtree_node* x = T->root;
    rbtree_node* y = T->nil;
    /* 找到插入位置 */
    while (x != T->nil)
    {
        y = x;      /* 更新y的指向，保证y指向插入位置的父节点 */
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

    /* 将新插入节点的子节点指向叶子节点 */
    z->left = T->nil;
    z->right = T->nil;
    // 节点设置为红色
    z->color = RED;

    rbtree_insert_balance(T, z);
}
