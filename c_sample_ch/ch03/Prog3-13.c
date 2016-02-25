#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cx ,cy; int ix = 0; 
	printf("輸入一個整數:"); scanf("%d",&ix);
	printf("輸入一個字元:"); scanf(" %c",&cx);
	printf("輸入一個字元:"); scanf(" %c",&cy);
	printf("\ncx = %d, cy = %d, ix = %d\n",cx,cy,ix);
	system("pause");
	return(0);
}

