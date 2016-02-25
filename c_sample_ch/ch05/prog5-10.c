#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix, iy, iMax;
	printf("請輸入兩個數, 中間留一個空白: ");
	scanf("%d%d",&ix,&iy);
	iMax = ix > iy ? ix : iy ; /* 比較 ix 與 iy, 設定較大數給 iMax */
	printf("較大數為: %d\n",iMax);
    system("pause");
	return 0;
}