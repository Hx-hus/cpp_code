#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int main() {

    int start_node, target_node;

    printf("��������ʼ�����ţ�");

    scanf("%d", &start_node);

    printf("������Ŀ�겿���ţ�");

    scanf("%d", &target_node);



    int visited[5] = { 0 }; // �������¼�Ѿ����ʹ��Ĳ�����

    int queue[100] = { 0 }; // �ö��д洢�����ʵĲ����ź�·��

    int path[100] = { 0 }; // �������¼��ǰ·��

    int front = 0, rear = 0; // ��˫�˶���ά������



    queue[rear++] = (start_node + target_node) % 5; // ����ʼ�����Ŀ�겿������Ӳ���5ȡģ���õ�һ��·��������������ͷ��

    visited[start_node] = 1; // ����ʼ������Ϊ�ѷ���



    while (front != rear) { // �����в�Ϊ��ʱ��ѭ��ִ�����²���

        int current_node = queue[front++]; // ȡ������ͷ���Ĳ����ź�·��

        if (current_node == target_node) { // �����ǰ�����ŵ���Ŀ�겿���ţ�˵���ҵ���һ��·�������·��������ѭ��

            for (int i = 0; i < sizeof(path) / sizeof(path[0]); i++) {

                printf("%d ", path[i]);

            }
        }

        for (int i = 1; i <= 5; i++) { // ����ǰ�����ż���i-1,�ٶ�5ȡģ���õ��µĲ����ź�·��������ò���δ�����ʹ�������������β��

            int new_node = (current_node + i) % 5;

            if (!visited[new_node]) {

                visited[new_node] = 1;

                queue[rear++] = new_node;

                path[rear - 1] = i; // ����ǰ·���������β��

            }

        }

    }



    printf("�޷���%d����%d\n", start_node, target_node); // ���ѭ����������δ�ҵ�·�����������ʾ��Ϣ

    return 0;

}