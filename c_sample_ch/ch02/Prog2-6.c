#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	const int RedTeaPrice = 20, CoffeePrice = 35; /* �ŧi�x�s�����P�@�ت��ܼ� */
	int RedTea, Coffee, total; // �x�s��J���ʶR�ƶq�P�`��
	printf("��J�����ʶR���ƶq:");
	scanf("%d",&RedTea); /* �����ϥΪ̪���J */
	printf("��J�@���ʶR���ƶq:");
	scanf("%d",&Coffee); /* �����ϥΪ̪���J */
	total = RedTea * RedTeaPrice + Coffee * CoffeePrice;
	printf("�ʶR�`����:%d \n", total);
	system("pause"); return(0);
}