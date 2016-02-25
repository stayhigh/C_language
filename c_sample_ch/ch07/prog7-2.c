#include <stdio.h>
#include <stdlib.h>
void XPrint(int n)
{
	int i;
	for( i=0; i<n; i++) printf("*");
	printf("\n");
}
int main(void)
{
	XPrint(10); // ©I¥sªÌ
	system("pause"); return (0);
}