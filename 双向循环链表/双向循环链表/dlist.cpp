#pragma once

#include"dlist.h"

//��������
void ListDestory(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur)
	{
		ListNode* n = cur->_next;
		free(cur);
		cur = n;
	}
	free(pHead);
}
void ListPrint(ListNode* pHead)
{
	assert(pHead);
	
	printf("<-head->");

	ListNode* cur = pHead->_next;

	while (cur)
	{
		printf("%d->", cur->_data);
		cur = cur->_next;
	}
	
	printf("\n");
}
//�����½ڵ�
ListNode* newln(LTDataType x)
{
	ListNode* nhead = new ListNode;
	if (!nhead)
	{
		perror("new nhead");
	}
	
	nhead->_data = x;
	return nhead;
}
//����
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	
	ListNode* newn = newln(x);

	newn->_next = pos;
	newn->_prev = pos->_prev;
	pos->_prev->_next = newn;
	pos->_prev = newn;
}
//β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListInsert(pHead, x);
}
//ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListInsert(pHead->_next, x);
}
//ɾ��
void ListErase(ListNode* pos)
{
	assert(pos);

	pos->_prev = pos->_next;
	pos->_next->_prev = pos->_prev;

	free(pos);
	pos = nullptr;
}
//βɾ
void ListPopBack(ListNode* pHead)
{
	assert(pHead);

	ListErase(pHead->_prev);
}
//ͷɾ
void ListPopFront(ListNode* pHead)
{
	assert(pHead);

	ListErase(pHead->_next);
}
//����
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* cur = pHead;
	while (cur)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return nullptr;
}