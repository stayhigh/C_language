#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n=6; /* n: �]�w�L�X * �����*/
	for(i=1;i<=n;i++) {	/* �~�j��N��O���@�C�n�L * */
		for(j=1;j<=i;j++) /* ���j��L�X���w�Ӽƪ� * */
			printf("*");
		printf("\n");
	}
	system("pause");
	return(0);
}