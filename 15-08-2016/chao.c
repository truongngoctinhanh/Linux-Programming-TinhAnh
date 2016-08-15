#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char s1[10] = "y";
	char re[10];
	printf("Bay gio la buoi chieu phai khong ?????\n");
	printf("y/n\n");
	scanf("%s",re);
	int b;
	b = strcmp(s1,re);
	if(b == 0)
	{
		printf("Chao buoi chieu\n");
	}
	else
	{
		printf("Bay gio khong phai la buoi chieu\n");
	}

}