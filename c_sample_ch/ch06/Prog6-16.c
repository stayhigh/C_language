#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, ifib[11];
	ifib[0] = 0; ifib[1] = 1; /* �]�w�_�l�p��һݭn���ƭ� */
	for( i = 2 ; i < 11 ; i++ ) 
		ifib[i] = ifib[i-1] + ifib[i-2]; /* �̷Ӥ����p�� */
	for( i = 1 ; i < 11 ; i++ )
		printf("f%-2d = %2d\n",i,ifib[i]); /*��X�e10�� */
	system("pause");
	return(0);
}