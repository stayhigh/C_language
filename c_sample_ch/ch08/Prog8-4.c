#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int	  i = 1,    *pi;
	float f = 1.2f, *pf;
	void  *pv;
	pi = &f;	// 編譯會時出現 不相容的型別 - 從 'float *' 至 'int *' 的警告訊息
	pf = &i; 	// 編譯會時出現 不相容的型別 - 從 'int *' 至 'float *' 的警告訊息
	printf("*pi = %d,*pf = %f\n",*pi,*pf);
	pv = &i; // 指向變數 i
	printf("*pv = %d  ",*(int *)pv);    // 輸出前轉成 int 型別
	pv = &f; // 改指向變數 f
	*(float *)pv = *(float *)pv + 1.0f; // 計算時轉成 float 型別
	printf("*pv = %f\n ",*(float *)pv); // 輸出前轉成 float 型別
	system("pause"); return(0);
}