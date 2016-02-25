#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int iLower, iUpper, iSpace, iDigit, iPunct;
	iLower = iUpper = iSpace = iDigit = iPunct = 0;
	printf("輸入一段英文句子, 以 # 代表結尾\n");
	while ( (ch = getchar()) != '#')	
	{
		if( islower(ch) ) {
			putchar(toupper(ch)); 
			iLower++; /*計數加1 */
		}
		else if( isupper(ch) ) { 
			putchar(tolower(ch));
			iUpper++; /*計數加1 */
		}
		else{
			if( isdigit(ch) ) iDigit++;	/* 數字字元 */
			else if( isspace(ch) ) iSpace++;/* 空白字元 */
			else if( ispunct(ch) ) iPunct++; /* 標點符號 */
			putchar(ch); /* 其他字元如實輸出 */
		}
    }
	printf("\n小寫英文字母有: %4d 個\n",iLower);
	printf("大寫英文字母有: %4d 個\n",iUpper);
	printf("    空白字元有: %4d 個\n",iSpace);
	printf("    數字字元有: %4d 個\n",iDigit);
	printf("    標點符號有: %4d 個\n",iPunct);
    system("pause"); return(0);
}