#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
	char ch;
	for( ch = 'A'; ch <= 'Z' ; ch++ ) { /* ch++ 就是運用 ch 的儲存內容為數, 而非字母 */
		printf("%c = %2d ",ch,ch);
		if( ch%5 == 0 ) printf("\n"); /* 每5筆輸出一個換行 */
	}
	system("pause");
	return(0);
}