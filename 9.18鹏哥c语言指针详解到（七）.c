#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//  
// ָ������	int *arr[];
// ����ָ��	int(*p)[]=&arr;
// ����ָ��	int(*p)()=Add;
// ����ָ������	int(*p[])()={Add1,Add2};
// ָ����ָ�������ָ��	int(*(*p)[])();
// 
//  //ָ������ - ���ָ�������
//	int* arr[10];
//	//����ָ�� - ָ�������ָ��
//	int(*pa)[10] = &arr;
//	//����ָ�� - ָ������ָ��
//	int(*pAdd)(int,int) = Add;//����&Add
//	int sum = (*pAdd)(1, 2);//����pAdd(1,2)
//	printf("sum = %d", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}


////2��n�η���ʾ����
//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    //2�Ķ����Ʊ�ʾΪ00000010
//    printf("%d", 2 << (n - 1));
//    return 0;
//}



//
////�ص�����,qsort������ʹ��
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
////int cmp_int(const void* e1, const void* e2)//�Ƚ���������ֵ
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
//	//�Ƚ����־��ǱȽ��ַ���������ֱ����<>=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e1)->name);
//}
////void test1()
////{
////	int arr[] = { 9,8,6,7,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);//szΪԪ�ظ���
//////	qsort - �⺯�� - �������� 
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
////	//ð������
////	//��һ��ð�������������ڵ�Ԫ�رȽϣ����Ƚ�n-1�Σ����ó�һ��Ԫ�ص���ȷλ��
////	//�ڶ���ð�������������ڵ�Ԫ�رȽϣ����Ƚ�n-2�Σ����ó��ڶ���Ԫ����ȷλ��
////	//һ������n-1��ð������ÿ�˱Ƚ�n-j-1�Σ��ѽ�����j��ð�����򣩣��Ϳ��԰�����Ԫ��������
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
////	//char* pc = &a;//��ᱨ���棡
////	void* p = &a;//void*ָ����Խ����κ��������ݵĵ�ַ
////	//*p = 0;//void��ָ���ǲ��ܽ��н����ò����ģ���Ϊ�����ָ�����ͣ���������ʼ����ֽڡ�ͬ����void*����ָ��Ҳ���ܽ��мӼ������Ĳ�����
////
////
////	return 0;
////}
//

//
////�Լ�����qsort����ʹ��
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
////����ͨ��ָ����дһ��swap�������ú������Խ���a��b����ֵ��
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
//��һ���������������������Ԫ�ص�ַ��
//�ڶ��������������������Ԫ�ظ�����
//����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽڣ���sizeof
//���ĸ�����������ָ�� - �Ƚ�����Ԫ�ش�С��ʹ�õĺ����ĵ�ַ - �ú���Ҫʹ�����Լ�ʵ��
//			 ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ


//
////�Լ�ʵ�ֿ����Ÿ����������ݵ�ð��������My_sort
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
//	//��������
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//ÿ���ŵĴ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//�Ƚ�һ�����Ĵ�С
//			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) > 0)
//			{
//				//��������λ��
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
