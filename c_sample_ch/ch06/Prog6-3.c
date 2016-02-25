#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, n;
	int iTotal = 0;	/* 設定總和為 0 */
	int iStatus;	/* 是否輸入數字 */
	do {
		printf("輸入一個大於 1 的數: ");
		iStatus = scanf("%d",&n);
		fflush(stdin); /* 清除輸入緩衝區的內容 */
	} while( n <= 1 || iStatus == 0 || n%2 == 1 ); /* 將奇數納入 */
	if( n/2==1 ) printf("總和為: 1\n"); /*當 n 為 2 時直接輸出 1  */
	else {
		i = 1; /* 輸入為偶數, i 從 1 開始 */
		do { 
			iTotal = iTotal + i + i; /* 除了 n/2 之外, 其他數都是累加兩次 */
			i = i + 1;
		} while( i <= n/2 - 1);
		iTotal += n/2; /* n/2 只累加 1 次*/
		printf("1+...+%d+...+1 = %d\n",n/2,iTotal);
	}
	system("pause");
	return(0);
}