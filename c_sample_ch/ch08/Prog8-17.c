#include <stdio.h>
#include <stdlib.h>
#define ROW 2	// ﹚竡皚计
#define COL 3	// ﹚竡皚︽计
int main(void)
{
	int i,j;
	int A[ROW][COL]={{3,2,4},{6,1,5}};	// 皚 A 砞﹚
	int B[ROW][COL]={{2,-1,3},{3,-4,-2}};  	// 皚 B 砞﹚ 
	int C[ROW][COL]={0};  			// 皚 C 砞﹚ 0
	for( i = 0 ; i < ROW ; i++ ) // 癹伴, 跑计 i ノㄓ北计
		for( j = 0 ; j < COL ; j++ ) // ず癹伴, 跑计 j ノㄓ北︽计
			*(C[i]+j) = *(A[i]+j) + *(B[i]+j); // 磅︽ C = A + B
	printf("Matrix C = A + B = \n");
	for(i=0;i<ROW;i++)	{		
		for(j=0;j<COL;j++)		
			printf("%3d",*(C[i]+j)); // 块皚 C ず甧
		printf("\n");
	}
	system("pause"); return 0;
}