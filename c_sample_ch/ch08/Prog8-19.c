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
	piA = A[0]; piB = B[0]; piC = C[0];
	for( i = 0 ; i < ROW*COL ; i++ )
		*(piC+i) = *(piA+i) + *(piB+i); 
	printf("Matrix C = A + B = \n");
	for( i = 0 ; i < ROW*COL ; i++ ) {
		printf("%3d",*(piC+i)); // 輸出陣列 C 的內容
		if( (i+1)%3 == 0 ) printf("\n");
	}
	system("pause"); return 0;
}