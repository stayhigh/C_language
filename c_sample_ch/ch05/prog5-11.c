#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("叫块钵计\n");
	printf("A = "); scanf("%d",&A);
	printf("B = "); scanf("%d",&B);
	printf("C = "); scanf("%d",&C);
	if( A > B ) { /* A > B */
		if( A > C ) /* A 程,  A>C  A>B */
			printf("A=%d  B=%d 籔 C=%d\n",A,B,C); 
		else /* C 程,  C >=A > B */
			printf("C=%d  A=%d 籔 B=%d\n",C,A,B); 
	}
	else { /* B >= A */
		if( B > C ) /* B 程,  B>C  B>=A */
			printf("B=%d  A=%d 籔 C=%d\n",B,A,C);
		else /* C 程,  C >=B >= A */
			printf("C=%d  A=%d 籔 B=%d\n",C,A,B); 
	}
    system("pause");
	return 0;
}