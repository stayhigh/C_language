#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, s;
	int iAtoZ[26] = {0}; /* 設定初始值為 0 */
	int iVowel[5] = {97,101,105,111,117};
	char ch; /* 接收輸入的字元 */
	printf("輸入一段英文句子,以#代表結尾\n");
	while ( (ch = getchar()) != '#')
	{
		if( ch >= 'A' && ch <= 'Z' )  /*是否介於 A 到 Z 之間 */
			iAtoZ[ch-65]++; /* 相對應位的儲存位置內容加 1 */
		else if (ch >= 'a' && ch <= 'z' )
			iAtoZ[ch-97]++; /* 相對應位的儲存位置內容加 1 */
    }
	printf("選擇輸出的內容 1:(全部), 2:(母音): ");
	scanf("%d",&s);
	if( s == 1 ) {
		for( i = 0 ; i < 26 ; i++ ) /* 檢查每一個字母的出現次數 */
			if( iAtoZ[i] != 0 ) printf("%c 出現 %2d 次\n",i+97,iAtoZ[i]);
	}
	else {
		for( i = 0 ; i < 5 ; i++ ) /* 檢查每一個字母的出現次數 */
			printf("%c 出現 %2d 次\n",iVowel[i],iAtoZ[iVowel[i]-97]);
	}
    system("pause");
	return(0);
}