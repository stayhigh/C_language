#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*設定陣列的初始值*/
	int i, j, k, t;
	for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]);
	printf("\n%4d\n",A[0]);
	for( i = 1; i < 6 ; i++ ) {
		j = 0; t = A[i]; //保留目前讀取的數
		while( t > A[j] && j < i ) j++; // j 將指到應該插入的位置 
		if( j != i ) {  // 當插入的位置就是目前讀取的位置就無須執行搬移操作
			for( k = i ; k > j ; k--) A[k] = A[k-1]; // 每一個數都往後搬一格
			A[j] = t; // 將目前讀取的數插入指定的位置
		}
		for( k = 0; k <= i ; k++ ) printf("%4d",A[k]); // 輸出目前的排序結果
		printf("\n");
	}
	system("pause");
	return(0);
}