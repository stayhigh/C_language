#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i,iCount=0; /* iCount:記錄 3 出現的次數 */
	srand((unsigned)time(NULL)); // 設定亂數產生器的起始值
	for(i = 1; i<=50000 ; i++)
		if( (rand()%6+1) == 3 )	/* 取亂數當成擲骰子*/
			iCount++;		/* 當骰子為 3 點時, iCount+1 */
	printf("骰子出現 3 點的次數有 %d 次\n",iCount);
	printf("機率為 %.3f\n",(float)iCount/50000);
	system("pause");
	return(0);
}