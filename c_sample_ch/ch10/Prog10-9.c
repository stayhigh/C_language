#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile; // 宣告指向檔案的結構指標
	char cStr[20] = "long long ago";  // 存放寫出的字元
	int i, len;
	if( (pfile = fopen("out.txt","w")) == NULL ) {  
		printf("out.txt 檔案無法開啟");
		system("pause"); return(0); 
	}
	fputs(cStr,pfile);	// 寫出字串 cStr 的內容
	fputc('\n',pfile);  // 寫入換行字元,使用 putc 亦可
	len = strlen(cStr); // 計算字串的長度
	for( i = 0 ; i < len ; i++ ) {
		fputc(cStr[i],pfile); fputc('\n',pfile); // 寫一個字元換一行
	}
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}