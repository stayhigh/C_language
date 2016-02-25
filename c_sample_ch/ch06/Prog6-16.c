#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, ifib[11];
	ifib[0] = 0; ifib[1] = 1; /* 設定起始計算所需要的數值 */
	for( i = 2 ; i < 11 ; i++ ) 
		ifib[i] = ifib[i-1] + ifib[i-2]; /* 依照公式計算 */
	for( i = 1 ; i < 11 ; i++ )
		printf("f%-2d = %2d\n",i,ifib[i]); /*輸出前10項 */
	system("pause");
	return(0);
}