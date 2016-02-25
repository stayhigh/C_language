#include <stdio.h>
#include <stdlib.h>
int iAbs(int); // 函式的原型宣告
int main(void)
{
	int y = -3;
	printf("-3 絕對值為 %d\n", iAbs(y)); // 呼叫函式, 變數 y 的內容 -3 會傳過去
	system("pause"); return(0);
}
int iAbs(int x)
{
	if( x >= 0 ) return(x);	// 如果 x >= 0 為正數, 直接回傳
	else return(-x);		// x 為負數, 回傳 -x
}