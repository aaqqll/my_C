#include<stdio.h>

//int main()
//{
//	//整形指针 - 指向整形的指针
//	int* p3;
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//常量字符串，内容不可改变，加个const。p2存的是a字符的地址。
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 - 指向数组的指针
//	int arr2[5]={0,1,5,3,4};
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//						//就是说(*pa)[i]==arr2[i]
//	int(*parr[10])[5];//parr[10]是10个元素的数组，其中每一个元素都是一个数组指针
//					  //即parr[10]每个元素都是指向一个有5个元素的数组 的指针
//	return 0;
//}




//
////数组参数
////一维数组传参
//void test(int arr[]) {}     //可以
//void test(int arr[10]) {}	//可以
//void test(int* arr) {}		//可以
//
//void test2(int* arr[]) {}	//可以
//void test2(int** arr) {}	//可以
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0; 
//}
//
////二维数组传参
//void test1(int arr[3][5]) {}//可以
//void test1(int arr[ ][5]) {}//可以
//void test1(int arr[3][ ]) {}//不可以！
//void test1(int arr[ ][ ]) {}//不可以！
//
//void test2(int* arr) {}		//不可以！这里传来的是二维数组第一行的内容（二维数组的首元素是第一行）void test2(int(*arr)[]) {}//
//void test2(int**arr) {}		//不可以！二级指针int**arr存的是一级指针变量的地址
//void test2(int*arr[5]) {}	//不可以！
//void test2(int(*arr)[5]) {}	//可以
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//二维数组,以数组形式传参
//	test2(arr);//二维数组,以指针形式传参
//	return 0;
//}
//




//
////指针传参
////一级指针传参
//void test1(int*p) {}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr;
//	test1(&a);//ok
//	test1(p);//ok
//	test1(arr);
//	return 0;
//}
//
////二级指针传参
//void test(int **p) {}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	int* arr[10];
//	test(&ptr);//ok
//	test(pp);//ok
//	test(arr);//ok
//}




//
////函数指针 - 指向函数的指针 - 存放函数地址的指针
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	//这两个打印出来的结果是一样的
//	//即：&函数名==函数名
//	//而：&数组名==数组的地址，数组名==数组首元素地址
//	int(*pa)(int,int) = add;
//	printf("%d", (*pa)(2, 3));
//	return 0;
//}
//
//
//
//void Print(char* str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	int* p = "hello";
//	void (*pa)(char*) = Print;
//	(*pa)("hello");
//	printf("\n");
//	(*pa)(p);
//	return 0;
//}


//
////函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int)={Add,Sub,Mul,Div};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//
//
//
//
//void my_strcpy(char* dest, const char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//
//}
//int main()
//{
//	char c1[] = "abcd";
//	char c2[] = "def";
//	char c3[] = "qwer";
//	char c4[] = "iuyiouuiu";
//	my_strcpy(c1, c2);
//	printf("%s\n", c1);
//	void(*pf)(char*, const char*) = my_strcpy;//函数指针
//	(*pf)(c3, c2);
//	printf("%s\n", c3);
//	void(*pfArr[4])(char*, const char*) = { *pf };//函数指针数组
//	(*pfArr[0])(c4, c2);
//	printf("%s\n", c4);
//	return 0;
//}

//int main()
//{
//	char a[] = "abc";
//	char* c = a;
//	printf("%s", c);
//	return 0;
//}

//
////利用函数指针数组实现计算器
//
//#include<string.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		printf("------------------------------\n");
//		printf("------1.Add--------2.Sub------\n");
//		printf("------3.Mul--------4.Div------\n");
//		printf("------5.Xor--------0.Exit-----\n");
//		printf("------------------------------\n");
//		printf("请输入您想要进行的操作：");
//		printf("\n");
//		scanf_s("%d", &input);
//		int(*p[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//		
//		if (input >= 1 && input <= 6)
//		{
//			printf("请输入要进行操作的两个数：");
//			scanf_s("%d %d", &x, &y);
//			printf("\n");
//			int ret = (* p[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("选择错误");
//		}
//	} while (input);
//	return 0;
//}





//
////指向函数指针数组的指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*p)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//函数指针数组 - pfArr是一个数组  
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向函数指针数组 的指针 - 指针指向的数组有4个元素
//							//指向的数组的每个元素的类型是一个函数指针 
//}
//
// 
// 




//回调函数 - 将函数1的地址传给函数2，在函数2内部调用函数1，称函数1为回调函数




//
//#include<stdio.h>
//int main()
//{
//    int x;
//    double a[3] = { 0 };
//    scanf_s("%d;", &x);
//    scanf_s("%lf,%lf,%lf", &a[0], &a[1], &a[2]);
//    double b[3];
//    for (int i = 0; i < 3; i++)
//    {
//        double k = a[i] * 1000;
//        double y = a[i] * 100;
//        double z = a[i] * 10;
//        int k1 = (int)k % 10;
//        int y1 = (int)y % 10;
//        int z1 = (int)z % 10;
//        if ((y1 == 0 && z1 == 0)|| (k1 != 0))
//            b[i] = a[i]+0.00001;
//        else
//            b[i] = a[i] + 0.005;
//    }
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", x, b[0], b[1], b[2]);
//    return 0;
//}


#include <stdio.h>
int main()
{
    int a;
    double b, c, d;
    scanf_s("%d;%lf,%lf,%lf", &a, &b, &c, &d);
    b = (int)(b * 100 + 0.5) / 100.0;
    c = (int)(c * 100 + 0.5) / 100.0;
    d = (int)(d * 100 + 0.5) / 100.0;

    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", a, b, c, d);
    return 0;
}////输入初始值10；1.025,1.035,1.045  为什么输出的是1.02，1.03，1.04而不是1.03，1.04，1.05呢？