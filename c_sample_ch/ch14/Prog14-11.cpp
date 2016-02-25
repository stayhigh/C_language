#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // 定義可活動的範圍
#define Y_MAX 10 // 定義可活動的範圍
bool g_bBoss = false; // 全域變數,false: 正常狀態, true: 隱藏狀態
class CMouse {
private:
	int m_ix, m_iy;		// 老鼠的起始位置
	int m_iStatus;	
	char m_cIcon;		
	char m_cMicon[2]; //儲存兩種不同的圖示
public:
	CMouse() {	// 建構元
		m_ix = 1; m_iy =1; // 老鼠的起始位置
		m_iStatus = 1;   // 1:正常狀態, 2:離開邊界 0:死亡狀態
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
	}
	void SetPos(int x, int y) {	m_ix = x; m_iy = y; }
	void SetIcon(char cN, char cB) { m_cIcon = m_cMicon[0] = cN; m_cMicon[1] = cB;}
	int  Update(char cIn);
	int  GetStatus(){return(m_iStatus);}
	void Show();
};
void CMouse::Show() {
	system("cls"); // 清除螢幕上的顯示
	if( g_bBoss ) {
		for( int i = 1 ; i <= X_MAX ; i++ ) 
			cout << "********************" << endl; //每行顯示 20 個星星
	}
	else {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // 往上,更改老鼠位置,並根據新的位置,更新老鼠的狀態
				m_ix--;
				if( m_ix < 0 ) m_iStatus = 0; // 老鼠超過邊界,死亡
				else if( m_ix == 0 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 's': // 往下
				m_ix++;
				if( m_ix > X_MAX + 1 ) m_iStatus = 0;		// 老鼠超過邊界,死亡
				else if( m_ix == X_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 'a': // 往左
				m_iy--;
				if( m_iy < 0 ) m_iStatus = 0; // 老鼠超過邊界,死亡
				else if( m_iy == 0 )  {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];} 
				break;
			case 'd': // 往右
				m_iy++;
				if( m_iy >  Y_MAX + 1 ) m_iStatus = 0; // 老鼠超過邊界,死亡
				else if( m_iy == Y_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
		}
	return(m_iStatus);	// 傳回老鼠的狀態
}
int main(void) {
	char cIn;
	int iStatus;
	CMouse mouseX; // 建立時就會自動呼叫 CMouse 建構元
	mouseX.Show(); // 讓老鼠自己畫出自己的位置
	iStatus = mouseX.GetStatus();
	while( iStatus != 0 ) { // 只要老鼠還在正常狀態就繼續讓使用者輸入
		cIn = getch();
		if( cIn == 'b' ) g_bBoss = !g_bBoss; // 判斷是否按下按鍵 b 
		iStatus = mouseX.Update(cIn); // 讓老鼠自己更新狀態
		if( iStatus ) mouseX.Show(); // 老鼠沒有死亡, 就必須更新老鼠位置的顯示
		else cout << "老鼠已經死亡,遊戲結束" << endl;
	}
	system("pause"); return(0);
}