#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // 函式原型宣告
int main(void)
{
	XPrint(10); // 呼叫者
	system("pause"); return (0);
}
void XPrint(int n)
{
	int i;
	for( i=0; i<n; i++) printf("*");
	printf("\n");
}