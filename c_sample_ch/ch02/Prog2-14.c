#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char  cx = 127;    /* 字元 cx = 127 */
	short sx =-32766;  /* 短整數 sx = -32766 */  
	unsigned int uix = 0;  /* 無正負號整數 uix = 0 */  
	printf("char cx = %d\n",cx); cx = cx + 1;
	printf("cx=cx+1, cx = %d\n",cx);
	printf("short sx = %d\n",sx); sx = sx - 4;
	printf("sx=sx-4; sx= %d\n",sx); 
	printf("unsigned int uix = %u\n",uix); uix = uix - 2;
	printf("uix=uix-2; uix = %u\n",uix);
	system("pause");
	return(0);
}