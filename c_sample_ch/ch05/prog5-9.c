#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("�п�J�T�Ӭ۲�����\n");
	printf("A = "); scanf("%d",&A);
	printf("B = "); scanf("%d",&B);
	printf("C = "); scanf("%d",&C);
	if( A>B && A>C) /* A �̤j */
		printf("A=%d �j�� B=%d �P C=%d\n",A,B,C);
	else if( B>A && B>C) /* B �̤j */
		printf("B=%d �j�� A=%d �P C=%d\n",B,A,C);
	else if( C>A && C>B) /* C �̤j */ 
		printf("C=%d �j�� A=%d �P B=%d\n",C,A,B);
    system("pause");
	return 0;
}
