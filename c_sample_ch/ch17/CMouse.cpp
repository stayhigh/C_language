#include <iostream>
#include <iomanip>
#include "CMouse.h"
using namespace std;
#define X_MAX 10 // 定義可活動的範圍
#define Y_MAX 10 // 定義可活動的範圍
void CMouse::Show() {
	if( !m_bTracer ) system("cls"); // 清除螢幕上的顯示
	for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
	cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // 往上，更改老鼠位置,並根據新的位置,更新老鼠的狀態
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