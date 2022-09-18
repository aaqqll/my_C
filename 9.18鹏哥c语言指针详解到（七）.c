#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//  
// 指针数组	int *arr[];
// 数组指针	int(*p)[]=&arr;
// 函数指针	int(*p)()=Add;
// 函数指针数组	int(*p[])()={Add1,Add2};
// 指向函数指针数组的指针	int(*(*p)[])();
// 
//  //指针数组 - 存放指针的数组
//	int* arr[10];
//	//数组指针 - 指向数组的指针
//	int(*pa)[10] = &arr;
//	//函数指针 - 指向函数的指针
//	int(*pAdd)(int,int) = Add;//或者&Add
//	int sum = (*pAdd)(1, 2);//或者pAdd(1,2)
//	printf("sum = %d", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}


////2的n次方表示方法
//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    //2的二进制表示为00000010
//    printf("%d", 2 << (n - 1));
//    return 0;
//}



//
////回调函数,qsort函数的使用
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////int cmp_int(const void* e1, const void* e2)//比较两个整形值
////{
////	return *(int*)e1 - *(int*)e2;
////}
////int cmp_float(const void*e1,const void*e2)
////{
////	if (*(float*)e1 == *(float*)e2)return 0;
////	else if (*(float*)e1 > *(float*)e2)return 1;
////	else if(*(float*)e1 < *(float*)e2)
////	return -1;
////}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串，不能直接用<>=来比较，应该用strcmp函数
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e1)->name);
//}
////void test1()
////{
////	int arr[] = { 9,8,6,7,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);//sz为元素个数
//////	qsort - 库函数 - 快速排序 
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////		printf("%d ", arr[i]);
////}
////void test2()
////{
////	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
////	int sz = sizeof(f) / sizeof(f[0]);
////	qsort(f, sz, sizeof(f[0]), cmp_float);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////		printf("%f ", f[i]);
////}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//void test4()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
////void bubble_sort(int arr[], int sz)
////{
////	//冒泡排序
////	//第一趟冒号排序，两两相邻的元素比较（共比较n-1次），得出一个元素的正确位置
////	//第二趟冒号排序，两两相邻的元素比较（共比较n-2次），得出第二个元素正确位置
////	//一共进行n-1趟冒泡排序，每趟比较n-j-1次（已进行了j趟冒泡排序），就可以把所有元素排完序
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int temp = 0;
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////}
//
////void qsort(void* base, size_t num, size_t width,
////	int(*cmp)(const void* e1, const void* e2));
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	test4();
//	//bubble_sort(arr, sz);
//	return 0;
//}
////
////int main()
////{
////	int a = 10;
////	//int* pa = &a;
////	//char* pc = &a;//这会报警告！
////	void* p = &a;//void*指针可以接收任何类型数据的地址
////	//*p = 0;//void型指针是不能进行解引用操作的，因为不清楚指针类型，不清楚访问几个字节。同样，void*类型指针也不能进行加减整数的操作。
////
////
////	return 0;
////}
//

//
////自己尝试qsort函数使用
//#include<string.h>
//#include<stdlib.h>
//struct people
//{
//	char name[20];
//	double grate;
//	int age;
//};
//int cmp_people_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct people*)e1)->name, ((struct people*)e2)->name);
//}
//int cmp_people_by_grate(const void* e1, const void* e2)
//{
//	if ((((struct people*)e1)->grate) > (((struct people*)e2)->grate)) return 1;
//	else if ((((struct people*)e1)->grate) == (((struct people*)e2)->grate)) return 0;
//	else if ((((struct people*)e1)->grate) < (((struct people*)e2)->grate)) return -1;
//}
//int cmp_people_by_age(const void* e1, const void* e2)
//{
//	return ((struct people*)e1)->age - ((struct people*)e2)->age;
//}
//void test_name()
//{
//	struct people s[4] = { {"dd",60.5,20},{"aa",61.0,21} ,{"cc",61.5,22},{"bb",62.1,19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_people_by_name);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s %lf %d", s[i].name, s[i].grate, s[i].age);
//		printf("\n");
//	}
//}
//void test_grate()
//{
//	struct people s[4] = { {"dd",60.5,20},{"aa",61.0,21} ,{"cc",61.5,22},{"bb",62.1,19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_people_by_grate);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s %lf %d", s[i].name, s[i].grate, s[i].age);
//		printf("\n");
//	}
//}
//void test_age()
//{
//	struct people s[4] = { {"dd",60.5,20},{"aa",61.0,21} ,{"cc",61.5,22},{"bb",62.1,19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_people_by_age);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s %lf %d", s[i].name, s[i].grate, s[i].age);
//		printf("\n");
//	}
//}
//int main()
//{
//	test_name();
//	test_grate();
//	test_age();
//	return 0;
//}



//
////这是通过指针来写一个swap函数，该函数可以交换a和b的数值。
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//qsort(	,	,	,	)
//第一个参数：待排序数组的首元素地址。
//第二个参数：待排序数组的元素个数。
//第三个参数：待排序数组每个元素的大小 - 单位是字节，用sizeof
//第四个参数：函数指针 - 比较两个元素大小所使用的函数的地址 - 该函数要使用者自己实现
//			 函数指针的两个参数是：待比较的两个元素的地址


//
////自己实现可以排各种类型数据的冒泡排序函数My_sort
//void Swap(char* t1, char* t2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp;
//		temp = *t1;
//		*t1 = *t2;
//		*t2 = temp;
//		t1++;
//		t2++;
//	}
//}
//void My_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//每趟排的次数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//比较一对数的大小
//			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) > 0)
//			{
//				//交换两者位置
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	My_sort(a, sz, sizeof(a[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
