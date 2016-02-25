#include <stdio.h>
#include <stdlib.h>
int Search(int [], int, int); // 原型宣告
int Search(int Ary[], int target, int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) 
		if( Ary[i] == target ) return(i); // 找到指定的數, 傳回索引值
	return(-1); // 沒有找到,傳回 -1
}
int main(void)
{
	int iGuess, ret;
	int iNum[12] = {2,48,94,23,56,37,71,63,19,82,17,39};
	do {
		printf("輸入1-100之間猜測的數: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 12); //呼叫 Search 函式進行搜尋
		if( ret >= 0 ) printf("輸入的數儲存在陣列第 %d 的位置\n",ret);
		else printf("你輸入的數不存在\n",ret);
	} while( ret == -1 ); // 當輸入的數找不到時,繼續執行
    system("pause"); return(0);
}