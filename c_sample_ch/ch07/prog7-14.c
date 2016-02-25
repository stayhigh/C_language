#include <stdio.h>
#include <stdlib.h>
void ShowChar(char, int);
#define HEIGHT 7 // 定義要輸出菱形的高度
void ShowChar(char ch, int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) printf("%c",ch);
}
int main(void)
{
	int i;
	int iNum[7] = {1,3,5,7,5,3,1};
	for( i = 0 ; i < 7 ; i++ ) {
		ShowChar(32,HEIGHT-(iNum[i]+1)/2); // 輸出前面必要的空白
		ShowChar(48+i,iNum[i]); // 每次都是單一的 iNum[i] 的內容傳遞到函式中
		printf("\n");   // 每行輸出完畢,要換行
	}
    system("pause"); return(0);
}