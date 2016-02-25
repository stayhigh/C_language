#include <stdio.h>
#include <stdlib.h>
#define SPACE ' ' 
int main(void)
{
	char ch;
	while ( (ch = getchar()) != '\n')	/* 讀取字元後進行換行字元的判斷 */
	{
		if(ch >= 65 && ch <= 90) putchar(ch+32); /*大寫變小寫*/
		else if(ch >= 97 && ch <= 122) putchar(ch-32); /*小寫變大寫*/
		else if (ch == SPACE) putchar('*'); /* 空白鍵變成**/  
    }
    putchar(ch);	/* 輸出最後的換行字元 */
    system("pause"); return 0;
}