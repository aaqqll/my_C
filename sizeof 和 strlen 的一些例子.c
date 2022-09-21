//#include<stdio.h>
//int main()
//{
//	//数组名是首元素地址，除了两种情况：
//	//1、sizeof（数组名） - 数组表示整个数组
//	//2、&数组名 - 数组表示整个数组
//
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));		//16 - 计算的是整个数组大小
//	printf("%d\n", sizeof(a + 0));	//4/8 - a+0表示的是首元素地址+0个字节，还是首元素地址。32位平台是4，64位平台是8
//	printf("%d\n", sizeof(*a));		//4 - a表示首元素地址，*a就是首元素
//	printf("%d\n", sizeof(a + 1));	//4/8 - 表示的是第二个元素的地址。32位平台是4，64位平台是8
//	printf("%d\n", sizeof(a[1]));	//4 - 第2个元素的大小
//	printf("%d\n", sizeof(&a));		//4/8 - &a是数组的地址，但数组的地址也是地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(*&a));	//16 - &a是整个数组的地址，*&a解引用后就是整个数组的大小
//	printf("%d\n", sizeof(&a + 1));	//4/8 - &a是整个数组的地址，&a+1是跳过了整个数组的地址，得到的还是一个地址，还是4/8个字节
//	printf("%d\n", sizeof(&a[0]));	//4/8 - &a[0]第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8 - &a[0]+1第二个元素的地址
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//这种写法在f后面隐藏了一个\0，实际上数组共有7个字节
//	char arr[]="abcdef";
//	printf("%d\n", sizeof(arr));			//7 - 计算的是数组的大小，单位是字节
//	printf("%d\n", sizeof(arr + 0));		//4/8 - arr+0是首元素地址加0个字节，还是首元素地址，地址的字节数就是4/8
//	printf("%d\n", sizeof(*arr));			//1 - arr是首元素地址，*arr就是首元素
//	printf("%d\n", sizeof(arr[1]));			//1 - 第二个元素
//	printf("%d\n", sizeof(&arr));			//4/8 - &arr是整个数组的地址，地址的字节数是4/8
//	printf("%d\n", sizeof(&arr+1));			//4/8 - 跳过整个数组的下一个数据的地址，还是地址
//	printf("%d\n", sizeof(&arr[0] + 1));	//4/8 - &arr[0]是首元素的地址，加1就是第二个元素的地址
//
//
//
//
//
//	char arr[]= "abcdef";
//	printf("%d\n", strlen(arr));			//6 - strlen的计算方法是遇到\0便终止，此处arr表示首元素地址，从首元素开始计算
//	printf("%d\n", strlen(arr + 0));		//6 - 和上面那个一模一样
//	printf("%d\n", strlen(*arr));			//err - stelen函数接收的是地址，当传来*arr时，即字符a，a会变成97作为地址传入，
//											//此时就是非法访问程序不拥有的地址
//	printf("%d\n", strlen(arr[1]));			//err - 同上，非法访问98地址
//	printf("%d\n", strlen(&arr));			//6 - 传来的是整个数组的地址，而strlen函数接收的是一个char*的数，因此会报警告，但依然能运行
//											//char(*p)[]=&arr;
//	printf("%d\n", strlen(&arr + 1));		//随机值 - 跳过整个数组的地址，得到数组后面一个数据的地址，从该地址开始一直到出现\0才会停下
//	printf("%d\n", strlen(&arr[0] + 1));	//5 - 从第二个元素开始到结束
//
//
//
//
//	char* p = "abcdef";
//	//这里只是将首元素地址存入了p中
//	//char arr[]="abcdef与char* p = "abcdef":
//	//arr[0]=*(arr+0)=*arr;  p[0]=*(p+0)=*p;
//	//arr==p
//	//但他们两个的不同之处在于：&p是指针变量p的地址，是另一块空间里的一个地址，而&arr是整个数组的地址，还是在数字那块空间
//	printf("%d\n", sizeof(p));			//4/8 - p是首元素的地址，地址的字节数是4/8
//	printf("%d\n", sizeof(p + 1));		//4/8 - p+1是第二个元素的地址，地址的字节数是4/8
//	printf("%d\n", sizeof(*p));			//1 - *p是第一个元素，即a
//	printf("%d\n", sizeof(p[0]));		//1 - 同上
//	printf("%d\n", sizeof(&p));			//4/8 - 指针的地址还是地址
//	printf("%d\n", sizeof(&p + 1));		//4/8 - 跳过指针的地址，还是地址
//	printf("%d\n", sizeof(&p[0] + 1));	//4/8 - 第二个元素的地址，还是地址
//
//
//
//
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));			//6 - 字符串的元素个数
//	printf("%d\n", strlen(p + 1));		//5 - p+1是第二个元素的地址，从第二个元素开始计数
//	//printf("%d\n", strlen(*p));			//err - *p是元素a，因为strlen接收的是地址，会将a转换成97并当作地址，此时是非法访问地址97了
//	//printf("%d\n", strlen(p[0]));		//err - 同上
//	printf("%d\n", strlen(&p));			//随机值 - 从变量p的地址开始，直到遇到\0
//	printf("%d\n", strlen(&p + 1));		//随机值 - 跳过变量p的地址，开始计数直到遇到\0
//	printf("%d\n", strlen(&p[0] + 1));	//5 - 从第二个元素的地址开始计数
//
//
//
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//48 - 整个数组
//	printf("%d\n", sizeof(a[0][0]));		//4 - 第一个元素
//	printf("%d\n", sizeof(a[0]));			//16 - 第一行元素。a[0]相当于第一行的数组名
//	printf("%d\n", sizeof(a[0] + 1));		//4/8 - 此时的a[0]+1表示的是第一行的首元素的地址+1，是第一行第二个元素的地址
//	printf("%d\n", sizeof(*a[0] + 1));		//4 - *a[0]是第一行首元素，+1是第一行第二个元素
//	printf("%d\n", sizeof(a + 1));			//4/8 - a表示的是数组的首元素的地址，二维数组的首元素是第一行，+1是第二行地址
//	printf("%d\n", sizeof(*(a + 1)));		//16 - 表示整个第二行，*(a+1)==a[1]
//	printf("%d\n", sizeof(&a[0] + 1));		//4/8 - 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//16 - 整个第二行
//	printf("%d\n", sizeof(*a));				//16 - 整个第一行
//	printf("%d\n", sizeof(a[3]));			//16 - sizeof函数只是根据（）内的数据类型求出字节数，并不会真正地访问a[3]，
//												 //所以不会报错！所以a[3]和a[0]、a[1]、a[2]是一样的
//
//
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr + 1));
//	//&a:是整个数组的地址
//	//&a+1:跳过整个数组的下一个位置的地址
//	//*(a+1):第二个元素
//	//*(ptr-1)：在ptr的位置往前4个字节，即5（因为已经强制类型转换成了int型）
//
//#include<stdio.h>
//	struct Test
//	{
//		int num;
//		char* pcname;
//		short sdate;
//		char cha[2];
//		short sba[4];
//	}*p;
//	int main()
//	{
//		p = (struct Test*)0x100000;//设p的值为0x1000000
//		printf("%d\n", sizeof(struct Test));//得出结构体的大小为32
//		printf("%p\n", p + 0x1);				//0x10000020 - p是指针，+1就是跳过整个结构体的地址，就是跳过结构体的大小，即32，32转为16进制为00000020
//		printf("%p\n", (unsigned long)p + 0x1);	//0x10000001 - 此时的p是整形，整形+1就是+1，1的16进制为00000001
//		printf("%p\n", (unsigned int*)p + 0x1);	//0x10000004 - 结构体指针转换为整形指针，一个整形指针的大小为4，则跳过了4个字节，4的16进制为00000004
//		//指针的+- 看的是它的类型
//		return 0;
//	}
//



这些东西搞不懂
#include<stdio.h>
int main()
{
	char a[5] = { "abcde" };
	printf("%d\n", a[0]);
	char b[5] = "abcde";
	printf("%c\n", b[0]);
	char c[5] = { 'a','b','c','d','e' };
	printf("%d\n", c[0]);
	char d[5] = {1,2,3,4,5};
	printf("%d\n", d[0]);
	int e[5] = "12345";
	printf("%d\n", e[0]);


}