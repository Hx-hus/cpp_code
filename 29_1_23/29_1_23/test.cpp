#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
int main() {
    int a[3];
    // ‰»Î ˝◊÷
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    //≈≈–Ú
    for (int i = 0; i < 3; i++) {
        int temp;
        for (int j = i + 1; j < 3; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        char ch;
        ch = getchar();
        if (ch == 'A') printf("%d", a[0]);
        if (ch == 'B') printf("%d", a[1]);
        if (ch == 'C') printf("%d", a[2]);
    }
    return 0;
}