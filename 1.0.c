#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char ah[] = "q";
//	char* hh = ah;
//	char arr[] = "avasd";
//	char* pa = arr;
//	printf("%s\n", hh);
//	printf("%c\n", *pc);
//	printf("%s\n", pa);
//	const char* p = "absdad";//�����ַ���
//	printf("%s", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}


//ָ������ ������
//
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int*  parr[4];//�������ָ������� - ָ������
//	char* pch[5]; //����ַ�ָ������� - ָ������
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,99 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++) {
//			printf("%d ",*(parr[i] + j) );
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ�� ��ָ��
//
//int main()
//{
//	int* p = NULL;  //p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//					//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	/*int arr[10] = { 0 };
//	arr - ��Ԫ�ص�ַ
//	arr[0] - ��Ԫ�ص�ַ
//	&arr - ����ĵ�ַ*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1[10] = arr;//p1��ָ������
//	int(*p2)[10] = &arr;//p2��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int (* pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	} 
//	return 0;
//}



//�����Ƕ�ά�������ʽ
void print2(int brr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}
}
//����������ָ�����ʽ
void print1(int(*p)[5], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print2(arr, 3, 5);
	print1(arr, 3, 5);

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		/*printf("%d ", *(arr1 + i));
		printf("%d ", arr1[i]);
		printf("%d ", *(p+i));*/
		printf("%d ", p[i]);
	}
		;
	return 0;
}


