#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iTea, iCoffee, iCount, iTotal; 
	iTea = iCoffee = iCount = iTotal = 0; // �]�w��l�ȳ��O0
	printf("��J�ʶR�������~��:"); scanf("%d",&iTea);
	printf("��J�ʶR�@�ت��~��:"); scanf("%d",&iCoffee);
	iTotal = iTea * 25 + iCoffee * 35;
	iCount = iTea + iCoffee;
	if( iCount > 20 || iTotal >= 600 || iTea >= 16 ) iTotal = iTotal * 0.85;
	printf("���I�`��:%d\n",iTotal);
	system("pause");
	return(0);
}
