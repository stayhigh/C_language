#include <stdio.h>
#include <stdlib.h>
void TimeTable(int, int); // 函式的原型宣告
int main(void)
{
	int N, M;
	printf("輸入 NxM 乘法表的大小,兩數用空白間隔: ");
	scanf("%d %d",&N,&M);
	TimeTable(N,M);
	system("pause"); return(0);
}
void TimeTable(int N, int M)
{
	int i, j;
	printf("   *"); /* 輸出第一行的*/
	for( j = 1; j <= M ; j++ ) printf("%4d",j);
	printf("\n");
	for( i = 1; i <= N ; i++ ) {
		printf("%4d",i);
		for( j = 1; j <= M ; j++ ) {
			printf("%4d",i*j); // 乘法表的內容
		}
		printf("\n");
	}
}