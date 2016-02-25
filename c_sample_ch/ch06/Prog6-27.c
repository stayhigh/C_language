#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i, ilength; /* ilength: 輸入字串的長度 */
	char str1[20], str2[20]; /* 接收與負責輸出字串 */
	do {
		printf("輸入一個字串: ");
		scanf("%s",str1); 
		ilength = strlen(str1); /* 計算字串長度 */
		printf("該字串的反向: ");
		for( i = 0; i <= ilength - 1 ; i-- )  
			str2[i] = str1[ilength-1-i] /* 反向將字元搬到 str2 */
		str2[ilength] ='\0'; /* 最後補上一個 null 字元 */
		printf("%s\n",str2);
	} while( ilength > 1 ); /* 輸入超過一個字元才會繼續 */
	system("pause");
	return(0);
}