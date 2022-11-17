#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int count = 0;
    int Add = 0;
    scanf_s("%d", &n);
    int arr[9][3] = { 0 };
    while (i < n)
    {
        int j = 0;
        while (j < 3)
        {
            scanf_s("%d", &arr[i][j]);
            j ++;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < 3)
        {
            Add = arr[i][j] + Add;
            if (j == 2)
            {
                if ((Add / 3) < 60)
                {
                    count++;
                }
                Add = 0;
            }
            j++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}
//int main()
//{
//    int arr[3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        if (i == 1)
//        {
//            printf("%d", arr[i]);
//        }
//    }
//    return 0;
//}