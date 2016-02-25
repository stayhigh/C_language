#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
	int i, j;
	printf("  *"); /* 輸出第一行的*/
	for( i = 1; i <= 9 ; i++ ) printf("%3d",i);
	printf("\n");
	for( i = 1; i <= 9 ; i++ ) {
		printf("%3d",i);
		for( j = 1; j <= 9 ; j++ ) {
			printf("%3d",i*j); /*輸出 i*j */
			Sleep(50); /* 暫停 0.05 秒 */
		}
		printf("\n");
		Sleep(200); /* 暫停 0.2 秒 */
	}
	system("pause");
	return(0);
}