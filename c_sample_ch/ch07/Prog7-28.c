#include <stdio.h>
#include <stdlib.h>
int Fib(int);   // Fibonacci 數列函式的原型宣告
int Fib(int n) // Fibonacci 數列函式的定義
{
	int ret;
	if ( n <= 2 ) return (1);
	ret = Fib(n-2) + Fib(n-1);
	return(ret); // 這兩行也可以寫成 ret(Fib(n-2) + Fib(n-1));
}
int main(void)
{
	int i, n;
	printf("要輸出費氏數列到第幾項: ");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++ )
		printf("數列的第%3d 項為 %4d\n",i,Fib(i));
	system("pause"); return(0);
}