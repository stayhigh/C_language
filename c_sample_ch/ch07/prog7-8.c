#include <stdio.h>
#include <stdlib.h>
void ShowChar(char, int); // 函式的原型宣告
#define HEIGHT 7	// 定義要輸出的金字塔高度
int main(void)
{
	int i;
	for( i = 0; i < HEIGHT; i++ ) {
		ShowChar(32,HEIGHT-i-1); // 前面必須輸出空白
		ShowChar(65+i,i*2+1); //輸出的字元數依序為: 1,3,5,...
		printf("\n"); // 每行輸出完畢,要換行
	}
	system("pause"); return(0);
}
void ShowChar(char ch, int n)
{
	int i;
	for( i = 0 ; i < n ; i++ ) printf("%c",ch);
}