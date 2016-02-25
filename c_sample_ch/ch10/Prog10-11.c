#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfin, *pfout;
	char cBuf[30];
	int  iLen;
	if((pfin=fopen("story.txt","r"))==NULL){ 
		printf("story.txt 檔案無法開啟");
		system("pause"); return(0); 
	} // 開啟讀取的檔案
	if((pfout=fopen("styout.txt","w"))==NULL){  
		printf("styout.txt 檔案無法開啟");
		system("pause"); return(0); 
	}
	while( !feof(pfin) ) {
		iLen = fread(cBuf, sizeof(char), 12, pfin); // 一次最多讀取 12 個位元組
		fwrite(cBuf, sizeof(char), iLen, pfout); // 將資料寫入 pfout 檔案
		cBuf[iLen] = '\0'; // 設定成字串輸出
		printf("讀取%2d Bytes.內容:%s\n",iLen,cBuf);
	}
	fclose(pfin); fclose(pfout); system("pause"); return(0); // 關閉檔案
}