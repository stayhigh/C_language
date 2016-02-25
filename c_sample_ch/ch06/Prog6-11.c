#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	float fTotal = 0;
	for( i = 1, j = 200; i <= 100 ; i++, j=j-2 ) /*不同的敘述與逗號隔開  */
		fTotal += (float)i/j;
	printf("加總結果為 %f\n",fTotal);
	system("pause");
	return(0);
}