#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iO,iH;
	printf("��J�@��16�i��Ʀr:");
	scanf("%x",&iH);
	printf("%x(16�i��) = %d(10�i��) = %o(8�i��)\n",iH,iH,iH);
	printf("��J�@�� 8 �i��Ʀr:");
	scanf("%o",&iO);
	printf("%o(8�i��) = %d(10�i��) = %x(16�i��)\n",iO,iO,iO);
	system("pause");
	return(0);
}