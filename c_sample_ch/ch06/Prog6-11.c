#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	float fTotal = 0;
	for( i = 1, j = 200; i <= 100 ; i++, j=j-2 ) /*���P���ԭz�P�r���j�}  */
		fTotal += (float)i/j;
	printf("�[�`���G�� %f\n",fTotal);
	system("pause");
	return(0);
}