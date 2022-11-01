#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	system("mode con cols=80 lines=60 ");
	system("title 向你致以最诚挚的祝福!");
	char data[200][60] = {"祝你生日快乐！祝你生日快乐 ！"};
	int sign = 0;
	int i, j, e;
	int a;
	long time;
	for (i = 1, a = I; i < I / 2; i++, a--)
	{
		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1; i < 80; i++)
	{
		if (i == 25)
		{
			printf("======祝晨阳，生日快乐。======");
			i += 30;
		}
		printf("\3");
	}
	printf("\n");
	for (i = 1; i <= R / 2; i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
			printf("\3");
		printf("\n");
	}

	for (; ; )
	{
		system("color a");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++);
		system("color 0"); for (time = 0; time < 99999999; time++);
		system("color 1"); for (time = 0; time < 99999999; time++);
		system("color 2"); for (time = 0; time < 99999999; time++);
		system("color 3"); for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++); system("color 0c");
		for (time = 0; time < 99999999; time++);
		printf("%s", data[sign]);
		sign++;
	}
	return 0;
}