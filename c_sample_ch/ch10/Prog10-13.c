#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE *pfin, *pfout;
	char cBuf[30];
	pfin  = fopen("story.txt","r");
	pfout = fopen("upperout.txt","w");
	if (pfin == NULL || pfout == NULL) {
		printf("檔案開啟失敗\n");
		system("pause");return(0);
	}
	while( !feof(pfin) ) {
		if( fscanf(pfin,"%s",cBuf) != EOF ) {
			cBuf[0] = toupper(cBuf[0]);  // 第一個字母變成大寫
			fprintf(pfout,"%s ",cBuf); // 寫入 pfout
		}
	}
	fclose(pfin); fclose(pfout);
	system("pause"); return(0);
}