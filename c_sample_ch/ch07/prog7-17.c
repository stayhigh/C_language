#include <stdio.h>
#include <stdlib.h>
int Search(int [][4], int, int, int); // 原型宣告, 引數2 通常會傳遞陣列的大小
int Search(int Ary[][4], int target, int rn, int cn) {
	int i, j;
	for( i = 0 ; i < rn ; i++ ) 
		for( j = 0 ; j < cn ; j++ ) 
		if( Ary[i][j] == target ) return(1); // 找到指定的數, 傳回1 
	return(-1); // 沒有找到,傳回 -1
}
int main(void)
{
	int iGuess, ret;
	int iNum[3][4] = {{2,48,94,23},{56,37,71,63},{19,82,17,39}};
	do {
		printf("輸入1-100之間猜測的數: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 3, 4); //呼叫 Search 函式進行搜尋
		if( ret == 1 ) printf("輸入的數儲存在陣列中\n");
		else printf("你輸入的數不存在\n",ret);
	} while( ret == -1 ); // 當輸入的數找不到時,繼續執行
    system("pause"); return(0);
}