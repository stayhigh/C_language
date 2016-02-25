#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("叫块钵计\n");
	printf("A = "); scanf("%d",&A);
	printf("B = "); scanf("%d",&B);
	printf("C = "); scanf("%d",&C);
	if( A>B && A>C) /* A 程 */
		printf("A=%d  B=%d 籔 C=%d\n",A,B,C);
	else if( B>A && B>C) /* B 程 */
		printf("B=%d  A=%d 籔 C=%d\n",B,A,C);
	else if( C>A && C>B) /* C 程 */ 
		printf("C=%d  A=%d 籔 B=%d\n",C,A,B);
    system("pause");
	return 0;
}
