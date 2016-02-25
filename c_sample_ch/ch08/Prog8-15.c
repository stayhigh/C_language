#include <stdio.h>
#include <stdlib.h>
int main(void)   
{   
	int i,j;
	int iX[3][4] = {0}; // 全部清成
	printf("iX[0][0] 起始位址: %p\n",iX[0]);
	printf("iX[1][0] 起始位址: %p\n",iX[1]);
	printf("iX[2][0] 起始位址: %p\n",iX[2]);
	iX[0][0] = 1; *(iX[1]+1) = 1; *(iX[2]+2) = 1; // 設定對角線為 1
	for( i = 0 ; i < 3 ; i++ )  {
		for( j = 0 ; j < 4 ; j++ ) 
			printf("%2d ",*(iX[i]+j));
		printf("\n");
	}
	system("pause"); return (0);   
 }  