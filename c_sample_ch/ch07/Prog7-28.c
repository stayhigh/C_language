#include <stdio.h>
#include <stdlib.h>
int Fib(int);   // Fibonacci �ƦC�禡���쫬�ŧi
int Fib(int n) // Fibonacci �ƦC�禡���w�q
{
	int ret;
	if ( n <= 2 ) return (1);
	ret = Fib(n-2) + Fib(n-1);
	return(ret); // �o���]�i�H�g�� ret(Fib(n-2) + Fib(n-1));
}
int main(void)
{
	int i, n;
	printf("�n��X�O��ƦC��ĴX��: ");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++ )
		printf("�ƦC����%3d ���� %4d\n",i,Fib(i));
	system("pause"); return(0);
}