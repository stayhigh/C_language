#include <stdio.h>
#include <stdlib.h>
void Hanoi(int,int,int,int); //函式原型宣告
void Hanoi(int n,int s,int m,int d)
{
	if ( n == 1 ) // 終止條件
		printf("將第%2d 個圓盤從塔%2d 搬到塔%2d\n",n,s,d);
	else {
		Hanoi(n-1,s,d,m); // 將上面的 n-1 個從塔 s 搬到塔 m
		printf("將第%2d 個圓盤從塔%2d 搬到塔%2d\n",n,s,d);
		Hanoi(n-1,m,s,d); // 將上面的 n-1 個從塔 m 搬到塔 d
	}
}
int main(void)
{
	int n;
	printf("有多少圓盤要搬: ");
	scanf("%d",&n);
	Hanoi(n,1,2,3); 
	system("pause"); return(0);
}