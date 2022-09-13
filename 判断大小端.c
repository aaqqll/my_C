#include<stdio.h>
check_sys()
{
	int a=1;
	return *(char*)&a;
}
int main()
{
	int ret=check_sys();
	if(ret==1)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");
	return 0;
}
