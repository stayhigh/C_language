#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	for( i = 1 ; i <= 4 ; i++ ) /*�~�j�� */
	{
		printf("i = %d, ",i);
		for( j = 1 ; j <= 3 ; j++ ) /*���j�� */  
			printf("j=%d ",j);
		printf("\n");
	}
	system("pause");
	return(0);
}