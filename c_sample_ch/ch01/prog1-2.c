#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int attack;   /* �ŧi�ܼ��x�s���a��J�������O */
	int defence;  /* �ŧi�ܼ��x�s���a��J�����m�O */
	printf("��J�����O:");
	scanf("%d",&attack); /* �����ϥΪ̪���J*/
	printf("��J�Ǫ������m�O:");
	scanf("%d",&defence); /* �����ϥΪ̪���J*/
	printf("��Ǫ����ˮ`�Ȭ�:%d \n",attack*3-defence*2);
	system("pause");
	return(0);
}