#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iEven, iOdd;  /* �t�d�p�ƻP�[�`���ܼ� */
	iEven = iOdd = 0; // ������iOdd = 0 , �M��O iEven = iOdd, �ҥH iEven=0
	for( i = 1 ; i <= 100 ; i++ ) { /* i �q 1 ���W�� 100, ���� i �� 101 �ɤ~����*/
		if( i%2 == 0 ) iEven += i; /* ���� */
		else iOdd += i; /* �_�� */
	}
	printf("1+3+...+99  = %d\n",iOdd);
	printf("2+4+...+100 = %d\n",iEven);
	system("pause"); 	
	return(0);
}