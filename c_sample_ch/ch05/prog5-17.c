#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("�п�J�T�Ӭ۲�����\n�ƻP�Ƥ����ΪŮ���}: ");
	scanf("%d%d%d",&A,&B,&C);
	if( A > B ) { /* A > B */
		if( B > C ) printf("A=%d > B=%d > C=%d\n",A,B,C); /* A > B > C*/ 
		else {/* A>B �B C>B, A �P C �A��@�� */
			if( A > C ) printf("A=%d > C=%d > B=%d\n",A,C,B); /* A > C > B*/ 
			else printf("C=%d > A=%d > B=%d\n",C,A,B);  /* C > A > B*/
		}
	}
	else { /* B > A */
		if( A > C ) printf("B=%d > A=%d > C=%d\n",B,A,C);  /* B > A > C */
		else { /* B>A �B C>A, B �P C �A��@�� */
			if( B > C ) printf("B=%d > C=%d > A=%d\n",B,C,A); /* B > C > A*/ 
			else printf("C=%d > B=%d > A=%d\n",C,B,A); /* C > B > A*/
		}
	}
    system("pause"); return(0);
}