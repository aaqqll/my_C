#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *dest,const char *scr)
{
	char*ret=dest;
	assert(dest!=NULL);
	assert(scr!=NULL);
	while(*dest++=*scr++)
	{
		;
	 } 
	 return ret;
}
int main()
{
	char arr1[] = "#####";
	char arr2[] = "bit";
	printf("%s", my_strcpy(arr1,arr2));
}
