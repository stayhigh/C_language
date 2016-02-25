#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415;
	int		iArray[] = {3,5,7};
	FILE	*pfile;
	if((pfile=fopen("number.bin","wb"))==NULL) { 
		printf("number.bin 檔案無法開啟");
		system("pause"); return(0); 
	} //開啟二進位檔
	fwrite(&da,sizeof(double),1,pfile); // 寫入變數 da 在記憶體中的儲存內容
	fwrite(&fb,sizeof(float) ,1,pfile); // 寫入變數 fb 在記憶體中的儲存內容  
	fwrite(iArray,sizeof(int),3,pfile); // 寫入變數 iArray 在記憶體中的儲存內容
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}