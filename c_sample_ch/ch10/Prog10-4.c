#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile;	// 宣告指向檔案的結構指標
	char cStr[80];	// 存放讀取的字元
	char cSearch[10];	// 輸入的學號
	unsigned int iLength; 	// 學號的長度
	int  iFlag = 0; // 代表找不到輸入的學號
	if( (pfile = fopen("stuinfo.txt","r")) == NULL ) {  // 判斷檔案是否開啟失敗
		printf("stuinfo.txt 檔案無法開啟"); system("pause"); return(0); 
	}
	printf("請輸入的查詢的學號: ");scanf("%s",cSearch);
	iLength = strlen(cSearch); // 計算輸入學號的長度
	while(!feof(pfile) ) {	// 判斷是否讀到檔案尾
		fgets(cStr,80,pfile);
		if( strncmp(cStr, cSearch, iLength) == 0 ) { // 找到輸入的學號
			printf("%s",cStr); iFlag = 1; // 輸出學生資料並設定學生已經找到
		}
	}
	if( iFlag == 0 ) printf("找不到輸入的學生\n");
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}