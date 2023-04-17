#pragma once


typedef int KEY_TYPE;
typedef int VALUE_TYPE;
#define RED 1
#define BLACK 2

typedef struct _rb_tree_node
{
    unsigned char color;
    struct _rb_tree_node* left;
    struct _rb_tree_node* right;
    struct _rb_tree_node* parent;

    KEY_TYPE key;
    VALUE_TYPE value;
} rbtree_node;

typedef struct _rb_tree
{
    rbtree_node* root;
    rbtree_node* nil;       // ���еĿ�Ҷ�ӽڵ㣨�ڣ�����һ���ڵ� 
} rbtree;

void rbtree_rotate_left(rbtree* T, rbtree_node* x);
void rbtree_rotate_right(rbtree* T, rbtree_node* x);