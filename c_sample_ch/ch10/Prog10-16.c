#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile;
	char cDate[5], cTel[20], cBuf[80];
	if((pfile=fopen("message.txt","r+"))==NULL) { 
		printf("message.txt 檔案無法開啟");
		system("pause"); return(0); 
	} //開啟更新的檔案
	while( !feof(pfile) ) { // 顯示檔案的內容
		fgets(cBuf,80,pfile);
		printf("%s",cBuf);
	}
	rewind(pfile); //讀寫頭回到檔案頭
	printf("\n輸入到貨日期:");
	gets(cDate);
	if( strlen(cDate) == 1 ) { //日期只有一個字元
		cDate[2] = '\0'; cDate[1] = cDate[0];
		cDate[0] = ' '; // 前面補一個空白
	}
	printf("輸入新的電話:");
	gets(cTel);
	// 將讀寫頭指向日期的位置,中文是兩個Bytes
	fseek(pfile,20,SEEK_SET);
	fputs(cDate,pfile);
	// 將讀寫頭指向電話的位置
	fseek(pfile,48,SEEK_SET);
	fputs(cTel,pfile);
	rewind(pfile); //讀寫頭回到檔案頭
	while( !feof(pfile) ) { // 顯示檔案的內容
		fgets(cBuf,80,pfile);
		printf("%s",cBuf);
	}
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}