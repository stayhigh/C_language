#include <stdio.h>
#include <stdlib.h>
#define REDTEA_PRICE 20 // �ŧi�Ÿ��`�ƨ��x�s�������
#define COFFEE_PRICE REDTEA_PRICE * 2
int main(void) 
{
	int RedTea, Coffee, total; // �x�s��J���ʶR�ƶq�P�`��
	printf("��J�����ʶR���ƶq:");
	scanf("%d",&RedTea); /* �����ϥΪ̪���J */
	printf("��J�@���ʶR���ƶq:");
	scanf("%d",&Coffee); /* �����ϥΪ̪���J */
	total = RedTea * REDTEA_PRICE + Coffee * COFFEE_PRICE;
	printf("�ʶR�`����:%d \n", total);
	system("pause");
	return(0);
}