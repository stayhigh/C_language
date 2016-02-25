#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile;
	char cBuf[30];
	char ch;
	if( (pfile = fopen("story.txt","r")) == NULL ) { 
		printf("story.txt 檔案無法開啟"); system("pause"); return(0); 
	} //開啟檔案
	fseek(pfile, 3, SEEK_SET);
	fscanf(pfile,"%s",cBuf); printf("讀取到: %s\n",cBuf);
	rewind(pfile);
	fscanf(pfile,"%s",cBuf); printf("讀取到: %s\n",cBuf);	
	fseek(pfile, -4, SEEK_END);
	fscanf(pfile,"%s",cBuf); printf("讀取到: %s\n",cBuf);	
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}