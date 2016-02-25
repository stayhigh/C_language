#include <stdio.h>
#include <stdlib.h>
int Search(int [][4], int, int, int, int []); // 原型宣告,需要四個引數
int Search(int Ary[][4], int target, int n, int m, int Idx[]) {
	int i, j;
	for( i = 0 ; i < n ; i++ ) 
		for( j = 0 ; j < m ; j++ ) 
			if( Ary[i][j] == target ) {
				Idx[0] = i; Idx[1] = j; // 找到時，將索引值儲存到 Idx 陣列中
				return(1); // 找到指定的數, 傳回1 
			}
	return(-1); // 沒有找到,傳回 -1
}
int main(void)
{
	int iGuess, ret;
	int Idx[2]; // 儲存回傳的兩個索引值
	int iNum[3][4] = {{2,48,94,23},{56,37,71,63},{19,82,17,39}};
	do {
		printf("輸入1-100之間猜測的數: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 3, 4, Idx); //呼叫 Search 函式進行搜尋
		if( ret == 1 ) printf("輸入的數儲存在陣列 [%d][%d] 的位置\n",Idx[0],Idx[1]);
		else printf("你輸入的數不存在\n",ret);
	} while( ret == -1); // 當輸入的數找不到時,繼續執行
    system("pause"); return(0);
}