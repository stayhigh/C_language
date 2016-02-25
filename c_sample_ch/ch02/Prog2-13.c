#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cBell ='\a';	/* 儲存 Bell 字元 */
	char cNL = '\n';	/* 儲存換行 \n 字元 */  
	char cBS = '\b';	/* 儲存倒退鍵 */
	printf("發出一個聲音 %c %c",cBell,cNL);	 
	printf("輸出AB但只有AB%cX覆蓋了 B\n",cBS);	
	printf("輸出反斜線 \\ \n");		// 輸出反斜線
	printf("\"這行字被雙引號括住\"\n");		// 輸出雙引號
	printf("\'這行字被單引號括住\'%c",cNL); // 輸出單引號
	system("pause");
	return(0);
}