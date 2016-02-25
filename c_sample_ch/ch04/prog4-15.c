#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 23;
	printf("++a*10 = %d\n",++a*10);
	printf("a= %d\n",a);
	printf("a++*10 = %d\n",a++*10);
	printf("a= %d\n",a);
	system("pause");
	return(0);
}