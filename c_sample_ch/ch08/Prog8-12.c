#include <stdio.h>
int* Sum(int);  // 原型宣告, 回傳值為 int 型別的位址
int* Sum(int n) // 回傳值為位址, 所以在資料型別後加上 *
{
	int i, m=0;
	for( i = 1 ; i <= n ; i++ ) m += i;
	return(&m); // 傳回 m 的左值
} 
int main(void)   
{   
	int n, *total;
	printf("輸入 n = "); scanf("%d",&n);
	total = Sum(n); // 呼叫 Sum, total 接收回傳的位址
	printf("1+2+...+%d = %d\n",n,total);
	system("pause"); return (0);   
}   