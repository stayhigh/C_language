#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i, ilength; /* ilength: 輸入字串的長度 */
	char str1[20]; /* 接收輸入的字串 */
	do {
		printf("輸入一個字串: ");
		scanf("%s",str1); 
		ilength = strlen(str1); /* 計算字串長度 */
		if( ilength <= 1 ) break; /* break 放在這裡 */
		printf("該字串的反向: ");
		for( i = ilength-1; i >= 0 ; i-- )  /* 反向輸入每一個字元 */
			putchar(str1[i]);
		printf("\n");
	} while( 1 ); /* 設定成無窮迴圈就行了, 省去對 ilength 的判斷 */
	system("pause");
	return(0);
}