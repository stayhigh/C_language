#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile; // 宣告指向檔案的結構指標
	pfile = fopen("myfirst.txt","w"); // 開啟檔案
	if( pfile == NULL) { // 檔案開啟失敗時, 必須終止對檔案的存取
		printf("檔案無法開啟");	system("pause"); return(0); 
	}
	fprintf(pfile,"%s\n","我的第一個 C 檔案");
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}