#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int x; /* �x�s�������ʶR�ƶq */
	int y; /* �x�s�@�ت��ʶR�ƶq */
	int z; /* �x�s���I���`�� */
	printf("�аݧA�n�ʶR�X�~����:");
	scanf("%d",&x); 
	printf("�аݧA�n�ʶR�X�~�@��:");
	scanf("%d",&y); 
	z = x * 25 + y * 35;
	printf("�ʶR�`����:%d \n",z);
	system("pause");
	return(0);
}