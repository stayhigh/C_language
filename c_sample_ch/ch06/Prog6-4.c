#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iTotal;  /* 負責計數與加總的變數 */
	iTotal = 0;
	for( i = 1 ; i <= 100 ; i++ ) /* i 從1遞增到100, 直到 i 為 101 時才結束*/
		iTotal = iTotal + i; /* 累加變數 i 的內容 */
	printf("1+2+...+100 = %d\n",iTotal);
	system("pause"); return(0);
}