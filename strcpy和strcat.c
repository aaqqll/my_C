#include<stdio.h>
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//我们要把arr2拷贝到arr1中，希望arr1变成bit，而不是bitdefghi，所以要把arr2的\0也拷贝过去
	printf("%s", arr1);
	return 0;
}

//模拟实现
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包括\0
	while (*dest++ = *src++)//比如当把b拷贝到a的时候，该式子的结果就是b
	{
		;
	}
	//返回目的地的空间的起始地址
	return ret;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
}



 //使用库函数strcpy的注意事项：
 //1、源字符串必须以\0结束
#include<stdio.h>
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = {'b','i','t'};
	strcpy(arr1, arr2);
	//源字符串arr2中不包含\0，当程序运行起来的时候，会一直往后越界访问，直到遇到\0，函数才会结束
	printf("%s", arr1);
	return 0;
}
 //2、会将源字符串中的\0拷贝到目标空间
 //3、目标空间必须足够大，以确保能够存放源字符串
#include<stdio.h>
int main()
{
	char arr1[] = "a";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//源字符串比目标字符串大，当函数运行起来的时候会越界访问，程序报错
	printf("%s", arr1);
	return 0;
}
 //4、目标空间必须可改变
#include<stdio.h>
int main()
{
	char* arr1 = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//目标字符串arr1内容不可被改变，此时运行程序会崩溃
	printf("%s", arr1);
	return 0;
}



//stract函数的使用
#include<stdio.h>
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	//目标空间必须足够大。目标空间太小了，无法容下helloworld
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//如何知道arr2的\0是否也被传递到arr1中去呢？见以下代码。

int main()
{
	char arr1[30] = "hello\0xxxxxxxxx";
	char arr2[] = "world";
	//调试时打开监视，若某一个x变成了\0，则说明\0也被传递过去了。
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//strcat函数的模拟实现
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1、找到目的字符串的\0
	while(*dest!='\0')
	{
		dest++;
	}
	//2、追加
	while(*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	//调试时打开监视，若某一个x变成了\0，则说明\0也被传递过去了。
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//源字符串必须以\0结束
// 目标空间必须有足够大的空间，容下目标空间字符串加上源字符串
// 目标空间必须可修改
//不能自己给自己追加