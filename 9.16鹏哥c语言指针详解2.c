#include<stdio.h>

//int main()
//{
//	//����ָ�� - ָ�����ε�ָ��
//	int* p3;
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//�����ַ��������ݲ��ɸı䣬�Ӹ�const��p2�����a�ַ��ĵ�ַ��
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ�������ָ��
//	int arr2[5]={0,1,5,3,4};
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//						//����˵(*pa)[i]==arr2[i]
//	int(*parr[10])[5];//parr[10]��10��Ԫ�ص����飬����ÿһ��Ԫ�ض���һ������ָ��
//					  //��parr[10]ÿ��Ԫ�ض���ָ��һ����5��Ԫ�ص����� ��ָ��
//	return 0;
//}




//
////�������
////һά���鴫��
//void test(int arr[]) {}     //����
//void test(int arr[10]) {}	//����
//void test(int* arr) {}		//����
//
//void test2(int* arr[]) {}	//����
//void test2(int** arr) {}	//����
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0; 
//}
//
////��ά���鴫��
//void test1(int arr[3][5]) {}//����
//void test1(int arr[ ][5]) {}//����
//void test1(int arr[3][ ]) {}//�����ԣ�
//void test1(int arr[ ][ ]) {}//�����ԣ�
//
//void test2(int* arr) {}		//�����ԣ����ﴫ�����Ƕ�ά�����һ�е����ݣ���ά�������Ԫ���ǵ�һ�У�void test2(int(*arr)[]) {}//
//void test2(int**arr) {}		//�����ԣ�����ָ��int**arr�����һ��ָ������ĵ�ַ
//void test2(int*arr[5]) {}	//�����ԣ�
//void test2(int(*arr)[5]) {}	//����
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//��ά����,��������ʽ����
//	test2(arr);//��ά����,��ָ����ʽ����
//	return 0;
//}
//




//
////ָ�봫��
////һ��ָ�봫��
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
////����ָ�봫��
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
////����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��
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
//	//��������ӡ�����Ľ����һ����
//	//����&������==������
//	//����&������==����ĵ�ַ��������==������Ԫ�ص�ַ
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
////����ָ������
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
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int)={Add,Sub,Mul,Div};//����ָ�������
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
//	void(*pf)(char*, const char*) = my_strcpy;//����ָ��
//	(*pf)(c3, c2);
//	printf("%s\n", c3);
//	void(*pfArr[4])(char*, const char*) = { *pf };//����ָ������
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
////���ú���ָ������ʵ�ּ�����
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
//		printf("����������Ҫ���еĲ�����");
//		printf("\n");
//		scanf_s("%d", &input);
//		int(*p[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//		
//		if (input >= 1 && input <= 6)
//		{
//			printf("������Ҫ���в�������������");
//			scanf_s("%d %d", &x, &y);
//			printf("\n");
//			int ret = (* p[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//	} while (input);
//	return 0;
//}





//
////ָ����ָ�������ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*p)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//����ָ������ - pfArr��һ������  
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ����ָ������ ��ָ�� - ָ��ָ���������4��Ԫ��
//							//ָ��������ÿ��Ԫ�ص�������һ������ָ�� 
//}
//
// 
// 




//�ص����� - ������1�ĵ�ַ��������2���ں���2�ڲ����ú���1���ƺ���1Ϊ�ص�����




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
}////�����ʼֵ10��1.025,1.035,1.045  Ϊʲô�������1.02��1.03��1.04������1.03��1.04��1.05�أ�