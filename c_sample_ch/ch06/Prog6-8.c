#include <stdio.h>
#include <stdlib.h> 
#include <windows.h> /* for Sleep 函式 */ 
int main(void)
{
	int i;
	for( i = 5; i >= 0 ; i-- ) {
		printf("剩下 %d 秒\n",i);
		Sleep(1000); /* 讓程式暫停 1 秒 */
	}
	printf("時間到\n");
	system("pause");
	return(0);
}