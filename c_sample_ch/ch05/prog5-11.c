#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("�п�J�T�Ӭ۲�����\n");
	printf("A = "); scanf("%d",&A);
	printf("B = "); scanf("%d",&B);
	printf("C = "); scanf("%d",&C);
	if( A > B ) { /* A > B */
		if( A > C ) /* A �̤j, �]�� A>C �B A>B */
			printf("A=%d �j�� B=%d �P C=%d\n",A,B,C); 
		else /* C �̤j, �]�� C >=A > B */
			printf("C=%d �j�� A=%d �P B=%d\n",C,A,B); 
	}
	else { /* B >= A */
		if( B > C ) /* B �̤j, �]�� B>C �B B>=A */
			printf("B=%d �j�� A=%d �P C=%d\n",B,A,C);
		else /* C �̤j, �]�� C >=B >= A */
			printf("C=%d �j�� A=%d �P B=%d\n",C,A,B); 
	}
    system("pause");
	return 0;
}