#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	da;
	float	fb;
	int		i, iArray[3];
	FILE	*pfile;
	if((pfile=fopen("number.bin","rb"))==NULL) { 
		printf("number.bin 檔案無法開啟"); system("pause"); return(0); 
	} //開啟二進位檔
	fread(&da,sizeof(double),1,pfile);  // 讀取變數 da 的內容
	fread(&fb,sizeof(float) ,1,pfile); // 讀取變數 fb 的內容  
	fread(iArray,sizeof(int),3,pfile); // 讀取 iArray 的內容
	printf("da = %6.5f\n",da);
	printf("fb = %6.5f\n",fb);
	for(i = 0; i < 3; i++) printf("iArray[%d]=%d\n",i,iArray[i]);
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}