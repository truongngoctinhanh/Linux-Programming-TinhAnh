#include <stdio.h>
#include <stdlib.h>
void Ten(){
	char ten[30];
	printf("\nNhap Ten: \n");
	scanf("%[^\n]", &ten);
	printf("Ten cua ban la %s\n" , &ten);

}