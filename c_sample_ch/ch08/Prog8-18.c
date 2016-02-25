#include <stdio.h>
#include <stdlib.h>
#define ROW 2	// 定義陣列的列個數
#define COL 3	// 定義陣列的行個數
int main(void)
{
	int i,j;
	int A[ROW][COL]={{3,2,4},{6,1,5}};	// 宣告陣列 A 並設定初值
	int B[ROW][COL]={{2,-1,3},{3,-4,-2}};  	// 宣告陣列 B 並設定初值 
	int C[ROW][COL]={0};  			// 宣告陣列 C 並設定初值為 0
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
			printf("%3d",*(piC+j)); // 輸出陣列 C 的內容
		printf("\n");
	}
	system("pause"); return 0;
}