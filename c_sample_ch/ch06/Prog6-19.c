#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	int iAtoZ[26] = {0}; /* 設定初始值為 0 */
	char ch; /* 接收輸入的字元 */
	printf("輸入一段英文句子,以#代表結尾\n");
	while ( (ch = getchar()) != '#')
	{
		if( ch >= 'a' && ch <= 'z' )  /*是否介於 a 到 z 之間 */
			iAtoZ[ch-97]++; /* 相對應位的儲存位置內容加 1 */
    }
	for( i = 0 ; i < 26 ; i++ ) /* 檢查每一個字母的出現次數 */
		if( iAtoZ[i] != 0 ) /* 表示有出現*/
			printf("%c 出現 %2d 次\n",i+97,iAtoZ[i]);
    system("pause");
	return(0);
}