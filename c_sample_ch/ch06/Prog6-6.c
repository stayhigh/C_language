#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iEven, iOdd;  /* �t�d�p�ƻP�[�`���ܼ� */
	iEven = iOdd = 0;
	for( i = 1 ; i <= 99 ; i=i+2 ) { /* i ���e�� 1,3,5,7...99,101, �C���W�[ 2*/
		iOdd += i; /* �_�� */ 
		iEven += i+1; /* ���� */
	}
	printf("1+3+...+99  = %d\n",iOdd);
	printf("2+4+...+100 = %d\n",iEven);
	system("pause"); 	
	return(0);
}