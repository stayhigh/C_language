#include <stdio.h>
#include <stdlib.h>
long Factor(long);  /* 階乘計算函式 Factor 的原型宣告 */
long Factor(long n) /* 定義計算階乘的函式*/
{
	long ret; // 儲存階乘的結果,預設為 1
	if( n == 1 ) return(1); // 終止呼叫的條件, 假設呼叫時引數內容一定 >=1
	ret = n * Factor(n-1);   
	return(ret); 
}
int main(void)
{
	int n;        /* 階乘的項次*/
	printf("計算n 的階乘值, 請輸入n 的值\n");
	scanf("%d",&n);
	printf("%2d! = %d\n",n, Factor(n));  
	system("pause"); return(0);
}