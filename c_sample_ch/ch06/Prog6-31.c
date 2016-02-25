#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define ROW 12 // 定義列數常數
#define COL 10 // 定義行數常數
int main(void)
{
	int i, j;
	int TimeTable[ROW][COL];
	for( i = 0; i <  ROW ; i++ )
		for( j = 0; j <  COL ; j++ ) 
			TimeTable[i][j] = (i+1)*(j+1); // 計算並儲存九九乘法表的內容
	printf("   *"); /* 輸出第一行的*/
	for( j = 1; j <= COL ; j++ ) printf("%4d",j);
	printf("\n");
	for( i = 1; i <= ROW ; i++ ) {
		printf("%4d",i);
		for( j = 1; j <= COL ; j++ ) {
			printf("%4d",TimeTable[i-1][j-1]); /*輸出 TimeTable 的內容 */
			Sleep(50); /* 暫停 0.05 秒 */
		}
		printf("\n");
		Sleep(200); /* 暫停 0.2 秒 */
	}
	system("pause"); return(0);
}