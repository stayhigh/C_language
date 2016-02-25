#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iO,iH;
	printf("輸入一個16進位數字:");
	scanf("%x",&iH);
	printf("%x(16進位) = %d(10進位) = %o(8進位)\n",iH,iH,iH);
	printf("輸入一個 8 進位數字:");
	scanf("%o",&iO);
	printf("%o(8進位) = %d(10進位) = %x(16進位)\n",iO,iO,iO);
	system("pause");
	return(0);
}