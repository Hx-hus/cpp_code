#define _CRT_SECURE_NO_WARNINGS 1 

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* newhead = NULL, * tail = NULL;
    struct ListNode* cur = head;

    while (cur != NULL)
    {
        if (newhead == NULL)
        {
            newhead = tail = cur;
            newhead->next = NULL;
        }
        else
        {
            newhead = cur;
            newhead->next = tail;
            tail = newhead;
        }

        head = head->next;
        cur = head;
    }
    return newhead;

}
int main()
{
    struct ListNode* e1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* e2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* e3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* e4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* e5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    e1->val = 1;
    e2->val = 2;
    e3->val = 3;
    e4->val = 4;
    e5->val = 5;

    e1->next = e2;
    e2->next = e3;
    e3->next = e4;
    e4->next = e5;
    e5->next = NULL;

    struct ListNode* end = reverseList(e1);

    while (end)
    {
        printf("%d", end->val);
        end = end->next;
    }

    return 0;

}

