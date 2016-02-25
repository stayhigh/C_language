#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("請輸入三個相異的數\n數與數之間用空格分開: ");
	scanf("%d%d%d",&A,&B,&C);
	if( A > B ) { /* A > B */
		if( B > C ) printf("A=%d > B=%d > C=%d\n",A,B,C); /* A > B > C*/ 
		else {/* A>B 且 C>B, A 與 C 再比一次 */
			if( A > C ) printf("A=%d > C=%d > B=%d\n",A,C,B); /* A > C > B*/ 
			else printf("C=%d > A=%d > B=%d\n",C,A,B);  /* C > A > B*/
		}
	}
	else { /* B > A */
		if( A > C ) printf("B=%d > A=%d > C=%d\n",B,A,C);  /* B > A > C */
		else { /* B>A 且 C>A, B 與 C 再比一次 */
			if( B > C ) printf("B=%d > C=%d > A=%d\n",B,C,A); /* B > C > A*/ 
			else printf("C=%d > B=%d > A=%d\n",C,B,A); /* C > B > A*/
		}
	}
    system("pause"); return(0);
}