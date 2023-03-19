#define _CRT_SECURE_NO_WARNINGS 1 

#include<assert.h>
#include<stdio.h>

typedef struct QueueNode
{
	struct QueueNode* next;
	int data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tall;
	int size;
}Queue;

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);

}