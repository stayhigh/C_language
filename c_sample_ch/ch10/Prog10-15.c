#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile;
	char cBuf[30];
	if( (pfile = fopen("ftell.txt","r")) == NULL ) { 
		printf("ftell.txt 檔案無法開啟");
		system("pause"); return(0); 
	} //開啟檔案
	printf("檔案起始位置: %2d\n",ftell(pfile));
	while( !feof(pfile) ) {
		fscanf(pfile,"%s",cBuf); printf("讀取 %-8s",cBuf);
		printf("目前位置: %2d\n",ftell(pfile));
	}
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}