#include<stdio.h>
#include<string.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		printf("------------------------------\n");
		printf("------1.Add--------2.Sub------\n");
		printf("------3.Mul--------4.Div------\n");
		printf("------5.Xor--------0.Exit-----\n");
		printf("------------------------------\n");
		printf("����������Ҫ���еĲ�����");
		printf("\n");
		scanf_s("%d", &input);
		int(*p[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };

		if (input >= 1 && input <= 6)
		{
			printf("������Ҫ���в�������������");
			scanf_s("%d %d", &x, &y);
			printf("\n");
			int ret = (*p[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�");
		}
		else
		{
			printf("ѡ�����");
		}
	} while (input);
	return 0;
}