#include <stdio.h>
#include <stdlib.h>
int main(void)   
{   
	int i,j;
	int iX[3][4] = {0}; // �����M��
	printf("iX[0][0] �_�l��}: %p\n",iX[0]);
	printf("iX[1][0] �_�l��}: %p\n",iX[1]);
	printf("iX[2][0] �_�l��}: %p\n",iX[2]);
	iX[0][0] = 1; *(iX[1]+1) = 1; *(iX[2]+2) = 1; // �]�w�﨤�u�� 1
	for( i = 0 ; i < 3 ; i++ )  {
		for( j = 0 ; j < 4 ; j++ ) 
			printf("%2d ",*(iX[i]+j));
		printf("\n");
	}
	system("pause"); return (0);   
 }  