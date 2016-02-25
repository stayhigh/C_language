#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>
int main(void)
{
	char cStr[20] = "無緩衝區的檔案存取";
	char cBuf[80]; // 用於讀取資料
	int ifd, ilen;
	ifd = open("unbuffer.txt", O_CREAT | O_RDWR , S_IWRITE ); //可讀寫方式開啟
	if( ifd == -1 ) {
		printf("unbuffer.txt 檔案無法開啟"); system("pause"); return(0); 
	} //建立 unbuffer.txt
	write(ifd, cStr, strlen(cStr)); //將 cStr 寫入檔案
	lseek(ifd, 0, SEEK_SET);		// 將讀寫頭移動到檔案頭
	ilen = read(ifd, cBuf, 79); cBuf[ilen] = '\0'; //讀取檔案
	printf("讀取的內容: %s\n",cBuf);
	close(ifd); system("pause"); return(0); // 關閉檔案
}