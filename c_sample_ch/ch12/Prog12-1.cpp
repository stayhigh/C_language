#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10	// 定義可活動的範圍
#define Y_MAX 10	// 定義可活動的範圍
void ShowMouse();	// 在螢幕上顯示老鼠的位置
int ix = 1, iy =1;	// 老鼠的起始位置
int iStatus = 1;	// 1:正常狀態, 2:在邊界上, 0: 死亡
char cIcon = '@';	// 儲存預設的老鼠圖示
int main(void) 
{
	char cIn;
	ShowMouse();	// 顯示老鼠的位置
	while( iStatus != 0 ) { // 只要老鼠還在正常狀態就繼續讓使用者輸入
		cIn = getch();
		switch(cIn) {
			case 'w': // 往上. 更改老鼠位置,並根據新的位置,更新老鼠的狀態
				break;
			case 's': // 往下
				break;
			case 'a': // 往左
				break;
			case 'd': // 往右
				break;
		}
		if( iStatus ) ShowMouse(); // 只要老鼠沒有死亡,就必須更新老鼠位置的顯示
	}
	system("pause"); return(0);
}
void ShowMouse()
{
	system("cls"); // 清除螢幕上的顯示
	for( int i = 1 ; i <= ix ; i++ ) cout << endl;
	cout << setw(iy+1) << setfill(' ') << cIcon << endl;
}