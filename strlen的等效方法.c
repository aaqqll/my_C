/*
#include<stdio.h>
int my_strlen(char* arr)
{
	char* str = arr;
	char* end = arr;
	while (*end != '\0')                                                                                                                                                                                         
		end++;
	return end - str;
}
int main()
{
	char arr[] = "1233\34\tsde";
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
*/



#include<stdio.h>
#include<assert.h>
int my_strlen(char *str)
{
	int count = 0;
	assert(*str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "1233\34\tsde";
	printf("%d\n", my_strlen(arr));
	return 0;
}