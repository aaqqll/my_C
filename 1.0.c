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
//	const char* p = "absdad";//常量字符串
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


//指针数组 是数组
//
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int*  parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5]; //存放字符指针的数组 - 指针数组
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


//数组指针 是指针
//
//int main()
//{
//	int* p = NULL;  //p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//					//数组指针 - 指向数组的指针 - 存放数组的地址
//	/*int arr[10] = { 0 };
//	arr - 首元素地址
//	arr[0] - 首元素地址
//	&arr - 数组的地址*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1[10] = arr;//p1是指针数组
//	int(*p2)[10] = &arr;//p2就是数组指针
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



//参数是二维数组的形式
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
//参数是数组指针的形式
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


