#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415;
	int		iArray[] = {3,5,7};
	int		i, ifd;
	ifd = open("number.bin", O_CREAT|O_BINARY|O_RDWR ,S_IWRITE);
	if( ifd  == -1 ) {
		printf("檔案開啟失敗"); system("pause"); return(0); 
	} 
	write(ifd, &da, sizeof(double));  // 寫入8個位元組
	write(ifd, &fb, sizeof(float));   // 寫入4個位元組 
	write(ifd, iArray, sizeof(int)*3);// 寫入12個位元組
	lseek(ifd, 0, SEEK_SET);	// 讀寫頭回到檔案頭
	read(ifd, &da, sizeof(double));   // 讀取變數 da 的內容
	read(ifd, &fb, sizeof(float));	  // 讀取變數 fb 的內容  
	read(ifd, iArray,sizeof(int)*3);  // 讀取 iArray 的內容
	printf("da = %6.4f\n",da);
	printf("fb = %6.4f\n",fb);
	for(i = 0; i < 3; i++) printf("iArray[%d]=%d\n",i,iArray[i]);
	close(ifd); system("pause"); return(0); // 關閉檔案
}