#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iTotal;  /* �t�d�p�ƻP�[�`���ܼ� */
	iTotal = 0;
	for( i = 1 ; i <= 100 ; i++ ) /* i �q1���W��100, ���� i �� 101 �ɤ~����*/
		iTotal = iTotal + i; /* �֥[�ܼ� i �����e */
	printf("1+2+...+100 = %d\n",iTotal);
	system("pause"); return(0);
}