#include <stdio.h>
#include <stdlib.h>
struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;

void main()
{
	PHANSO *a;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	a = (PHANSO*)malloc(30* sizeof(PHANSO));
	for(int i=0;i<n;i++)
	{
		printf("Nhap tu so:\n");
		scanf("%d", &(a+i)->tu);
		printf("Nhap mau so:\n");
		scanf("%d", &(a+i)->mau);
	}
	printf("Phan so da nhap la: \n");
	for(int i=0;i<n;i++)
		printf("%d/%d \t", (a+i)->tu, (a+i)->mau);
	printf("\n");
	free(a);

}