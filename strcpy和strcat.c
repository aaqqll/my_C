#include<stdio.h>
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//����Ҫ��arr2������arr1�У�ϣ��arr1���bit��������bitdefghi������Ҫ��arr2��\0Ҳ������ȥ
	printf("%s", arr1);
	return 0;
}

//ģ��ʵ��
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬����\0
	while (*dest++ = *src++)//���統��b������a��ʱ�򣬸�ʽ�ӵĽ������b
	{
		;
	}
	//����Ŀ�ĵصĿռ����ʼ��ַ
	return ret;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
}



 //ʹ�ÿ⺯��strcpy��ע�����
 //1��Դ�ַ���������\0����
#include<stdio.h>
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = {'b','i','t'};
	strcpy(arr1, arr2);
	//Դ�ַ���arr2�в�����\0������������������ʱ�򣬻�һֱ����Խ����ʣ�ֱ������\0�������Ż����
	printf("%s", arr1);
	return 0;
}
 //2���ὫԴ�ַ����е�\0������Ŀ��ռ�
 //3��Ŀ��ռ�����㹻����ȷ���ܹ����Դ�ַ���
#include<stdio.h>
int main()
{
	char arr1[] = "a";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//Դ�ַ�����Ŀ���ַ����󣬵���������������ʱ���Խ����ʣ����򱨴�
	printf("%s", arr1);
	return 0;
}
 //4��Ŀ��ռ����ɸı�
#include<stdio.h>
int main()
{
	char* arr1 = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	//Ŀ���ַ���arr1���ݲ��ɱ��ı䣬��ʱ���г�������
	printf("%s", arr1);
	return 0;
}



//stract������ʹ��
#include<stdio.h>
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	//Ŀ��ռ�����㹻��Ŀ��ռ�̫С�ˣ��޷�����helloworld
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//���֪��arr2��\0�Ƿ�Ҳ�����ݵ�arr1��ȥ�أ������´��롣

int main()
{
	char arr1[30] = "hello\0xxxxxxxxx";
	char arr2[] = "world";
	//����ʱ�򿪼��ӣ���ĳһ��x�����\0����˵��\0Ҳ�����ݹ�ȥ�ˡ�
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//strcat������ģ��ʵ��
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1���ҵ�Ŀ���ַ�����\0
	while(*dest!='\0')
	{
		dest++;
	}
	//2��׷��
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
	//����ʱ�򿪼��ӣ���ĳһ��x�����\0����˵��\0Ҳ�����ݹ�ȥ�ˡ�
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//Դ�ַ���������\0����
// Ŀ��ռ�������㹻��Ŀռ䣬����Ŀ��ռ��ַ�������Դ�ַ���
// Ŀ��ռ������޸�
//�����Լ����Լ�׷��