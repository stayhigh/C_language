#include <stdio.h>
#include <stdlib.h>
#define REDTEA_PRICE 20
#define COFFEE_PRICE 35
int main(void) 
{
	// �x�s��J���ʶR�ƶq�B�`���P�`�M��
	int RedTea, Coffee, total, TotalCups; 
	printf("��J�����ʶR���ƶq:"); scanf("%d",&RedTea); 
	printf("��J�@���ʶR���ƶq:"); scanf("%d",&Coffee); 
	total = RedTea * REDTEA_PRICE + Coffee * COFFEE_PRICE;
	printf("�ʶR�`����:%d \n", total);
	RedTea = RedTea * 2 + 1;	// �p������s�@���M��
	Coffee = Coffee + Coffee / 2 + 2;	// �p��@�ػs�@���M��
	TotalCups = RedTea + Coffee;	// �p���`�M��
	printf("����: %d �M, �@��: %d �M,�`��: %d �M\n",RedTea,Coffee,TotalCups);
	system("pause");
	return(0);
}