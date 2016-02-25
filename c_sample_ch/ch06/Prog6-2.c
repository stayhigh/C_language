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
	} while( n <= 1 || iStatus == 0 );
	i = 1; /* 負責 1+2+...+n 的遞增值 */
	do 
	{
		iTotal += i; /* 加總 */
		i = i + 1;
	} while( i <= n );
	printf("1+...+%d = %d \n",n,iTotal);
	system("pause");
	return(0);
}