#include <stdio.h>
#include <stdlib.h>
void fun1();
int i = 1; // 全域變數
int main() {
//	int i = 11; // 區域變數
	if( i == 11 ) {
		int i = 111;
		printf("i = %d in if\n",i); // 使用第 8 行宣告的變數 i
	}
	else {
		i++; printf("i = %d\n",i); // 使用第 6 行宣告的變數 i
	}
	fun1(); 
	printf("i = %d in main\n",i); // 使用第 6 行宣告的變數 i
	system("pause"); return(0);
}
void fun1() 
{
	i++; // 使用第 4 行宣告的變數 i
	printf("i = %d in fun1\n",i);
}