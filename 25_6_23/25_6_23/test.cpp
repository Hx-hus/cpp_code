#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int main() {

    int start_node, target_node;

    printf("请输入起始部落编号：");

    scanf("%d", &start_node);

    printf("请输入目标部落编号：");

    scanf("%d", &target_node);



    int visited[5] = { 0 }; // 用数组记录已经访问过的部落编号

    int queue[100] = { 0 }; // 用队列存储待访问的部落编号和路径

    int path[100] = { 0 }; // 用数组记录当前路径

    int front = 0, rear = 0; // 用双端队列维护队列



    queue[rear++] = (start_node + target_node) % 5; // 将起始部落和目标部落编号相加并对5取模，得到一条路径，将其加入队列头部

    visited[start_node] = 1; // 将起始部落标记为已访问



    while (front != rear) { // 当队列不为空时，循环执行以下操作

        int current_node = queue[front++]; // 取出队列头部的部落编号和路径

        if (current_node == target_node) { // 如果当前部落编号等于目标部落编号，说明找到了一条路径，输出路径并结束循环

            for (int i = 0; i < sizeof(path) / sizeof(path[0]); i++) {

                printf("%d ", path[i]);

            }
        }

        for (int i = 1; i <= 5; i++) { // 将当前部落编号加上i-1,再对5取模，得到新的部落编号和路径，如果该部落未被访问过，则将其加入队列尾部

            int new_node = (current_node + i) % 5;

            if (!visited[new_node]) {

                visited[new_node] = 1;

                queue[rear++] = new_node;

                path[rear - 1] = i; // 将当前路径加入队列尾部

            }

        }

    }



    printf("无法从%d到达%d\n", start_node, target_node); // 如果循环结束后仍未找到路径，则输出提示信息

    return 0;

}