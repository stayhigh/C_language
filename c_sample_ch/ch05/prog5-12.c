#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iRed, iGreen, icount, itotal;
	printf("�п�J��Ӱӫ~�ʶR���ƶq\n");
	printf("���� = "); scanf("%d",&iRed);
	printf("��� = "); scanf("%d",&iGreen);
	icount = iRed+iGreen;
	itotal = iRed*150+iGreen*200;
	if( icount > 40 ) { /* �ʶR�`�ƶW�L 40 �� */
		if( iGreen >= 30 ) {  /* ���ӫ~�W�L 30 �� */
			itotal = itotal * 0.8;
			printf("�z�ɦ� 8 �骺�u�f\n");
		}
		else { 
			itotal = itotal * 0.85;
			printf("�z�ɦ� 85 �骺�u�f\n");
		}
	}
	else if( icount > 30 ) {  /* �ʶR�`�ƶW�L 30 �� */
		if( iGreen >= 20 ) { /* ���ӫ~�W�L 20 �� */
			itotal = itotal * 0.9; printf("�z�ɦ� 9 �骺�u�f\n");
		}
		else if( iRed >= 28 ) { /* ����ӫ~�W�L 28 �� */
			itotal = itotal * 0.95; printf("�z�ɦ� 95 �骺�u�f\n");
		}
	}
	printf("�ʶR���`���B: %d\n",itotal);	
	system("pause");
	return(0);
}