#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10	// 定義可活動的範圍
#define Y_MAX 10	// 定義可活動的範圍
void ShowMouse();
int ix = 1, iy =1;	// 老鼠的起始位置
int iStatus = 1;	// 1:正常狀態, 2:在邊界上, 0: 死亡
char cIcon = '@';	// 新增儲存老鼠的圖示
int main(void)
{
	char cIn;
	ShowMouse();
	while( iStatus != 0 ) { // 只要老鼠還在正常狀態就繼續讓使用者輸入
		cIn = getch();
		switch(cIn) {
			case 'w': // 往上,更改老鼠位置,並根據新的位置,更新老鼠的狀態
				ix--;
				if( ix < 0 ) iStatus = 0; // 老鼠超過邊界,死亡
				else if( ix == 0 ) {iStatus = 2; cIcon = 'Q';}// 走到邊界上
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
				break;
			case 's': // 往下
				ix++;
				if( ix > X_MAX + 1 ) iStatus = 0;		// 老鼠超過邊界,死亡
				else if( ix == X_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// 走到邊界上
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
				break;
			case 'a': // 往左
				iy--;
				if( iy < 0 ) iStatus = 0; // 老鼠超過邊界,死亡
				else if( iy == 0 )  {iStatus = 2; cIcon = 'Q';}// 走到邊界上
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';} 
				break;
			case 'd': // 往右
				iy++;
				if( iy >  Y_MAX + 1 ) iStatus = 0; // 老鼠超過邊界,死亡
				else if( iy == Y_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// 走到邊界上
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';}
				break;
		}
		if( iStatus ) ShowMouse(); // 只要老鼠沒有死亡,就必須更新老鼠位置的顯示
		else cout << "老鼠已經死亡, 遊戲結束" << endl;		
	}
	system("pause"); return(0);
}
void ShowMouse()
{
	system("cls"); // 清除螢幕上的顯示
	for( int i = 1 ; i <= ix ; i++ ) cout << endl;
	cout << setw(iy+1) << setfill(' ') << cIcon << endl;
}