#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cNL = '\n'; int n = 97;
	putchar(n); /* 輸出變數 n 的值, a 的 ASCII 編碼是 97 */ 
	putchar(cNL);
	puts("上一行以 putchar(cNL) 輸出換行");
	putchar(65);  /* 輸出 65 所對應的字元*/
	putchar('\n'); /* 換行*/
	system("pause");
	return(0);
}

