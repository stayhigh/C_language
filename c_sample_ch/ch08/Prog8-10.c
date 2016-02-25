#include <stdio.h>
#include <stdlib.h>
void Sum(int, int *);  // 原型宣告,引數為指標變數必須同時保留 * 號
void Sum(int n, int *result) 
{
	int i, m=0;
	for( i = 1 ; i <= n ; i++ ) m += i;
	*result = m; // 將計算結果儲存到 result 中
} 
int main(void)   
{   
	int n, total;
	printf("輸入 n = "); scanf("%d",&n);
	Sum(n, &total); // 呼叫 Sum, &total 將左值傳遞過去
	printf("1+2+...+%d = %d\n",n,total);
	system("pause"); return (0);   
 }   