#include <stdio.h>
#include <stdlib.h>
#define ROW 2	// �w�q�}�C���C�Ӽ�
#define COL 3	// �w�q�}�C����Ӽ�
int main(void)
{
	int i,j;
	int A[ROW][COL]={{3,2,4},{6,1,5}};	// �ŧi�}�C A �ó]�w���
	int B[ROW][COL]={{2,-1,3},{3,-4,-2}};  	// �ŧi�}�C B �ó]�w��� 
	int C[ROW][COL]={0};  			// �ŧi�}�C C �ó]�w��Ȭ� 0
	int *piA, *piB, *piC;
	for( i = 0 ; i < ROW ; i++ ) {
		piA = A[i]; piB = B[i]; piC = C[i];
		for( j = 0 ; j < COL ; j++ ) 
			*(piC+j) = *(piA+j) + *(piB+j); 
	}
	printf("Matrix C = A + B = \n");
	for(i=0;i<ROW;i++)	{
		piC = C[i];
		for(j=0;j<COL;j++)		
			printf("%3d",*(piC+j)); // ��X�}�C C �����e
		printf("\n");
	}
	system("pause"); return 0;
}