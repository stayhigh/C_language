#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // 定義可活動的範圍
#define Y_MAX 10 // 定義可活動的範圍
class CMouse {
private:
	int  m_ix,  m_iy;	// 老鼠的起始位置
	CMouse *m_pTarget;	// 指向被跟隨者的指標變數
	int  m_iStatus;	
	bool m_bTracer; // 設定是否為跟隨者
	char m_cIcon;		
	char m_cMicon[2]; //儲存兩種不同的圖示
public:
	CMouse() {	// 建構元
		m_ix = 1; m_iy =1; // 老鼠的起始位置
		m_iStatus = 1;   // 1:正常狀態, 2:離開邊界 0:死亡狀態
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
		m_bTracer = false;	// 非跟隨者
	}
	void Show();
	void SetPos(int x, int y) {	m_ix = x; m_iy = y; }
	void SetIcon(char cN, char cB) { m_cIcon = m_cMicon[0] = cN; m_cMicon[1] = cB;}
	int  Update(char cIn);
	void GetPos(int *ix, int *iy)  {*ix = m_ix;  *iy = m_iy;}
	void SetTracer(bool bT) { m_bTracer = bT;}
	int  GetStatus(){return(m_iStatus);}
	void SetTarget(CMouse *mouse) {m_pTarget = mouse;}
	void UpdatePos() {	// 取得 m_Target 所指向的物件的座標
		int ix, iy;
		m_pTarget->GetPos(&ix, &iy);	// 取得指向物件的座標
		m_ix = ix+6;  m_iy = iy;	// 更新自己的位置
	}
};
void CMouse::Show() {
	if( !m_bTracer ) system("cls"); // 清除螢幕上的顯示
	for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
	cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // 往上，更改老鼠位置，並根據新的位置，更新老鼠的狀態
				m_ix--;
				if( m_ix < 0 ) m_iStatus = 0; // 老鼠超過邊界，死亡
				else if( m_ix == 0 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 's': // 往下
				m_ix++;
				if( m_ix > X_MAX + 1 ) m_iStatus = 0;		// 老鼠超過邊界，死亡
				else if( m_ix == X_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 'a': // 往左
				m_iy--;
				if( m_iy < 0 ) m_iStatus = 0; // 老鼠超過邊界，死亡
				else if( m_iy == 0 )  {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];} 
				break;
			case 'd': // 往右
				m_iy++;
				if( m_iy >  Y_MAX + 1 ) m_iStatus = 0; // 老鼠超過邊界，死亡
				else if( m_iy == Y_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// 走到邊界上
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
		}
	return(m_iStatus);	// 傳回老鼠的狀態
}
int main(void) {
	char cIn;
	int iStatus;
	CMouse mouse1, mouse2; // 建立 mouse1 與 mouse2
	mouse1.Show(); // 讓老鼠1 畫出自己的位置
	mouse2.SetTarget(&mouse1);	// 設定老鼠2 的跟隨對象
	mouse2.SetTracer(true);
	mouse2.UpdatePos();	// 老鼠2 根據跟隨對象更新自己的位置
	mouse2.Show();		// 讓老鼠2 畫出自己
	iStatus = mouse1.GetStatus();
	while( iStatus != 0 ) { 
		cIn = getch();
		iStatus = mouse1.Update(cIn); // 讓老鼠自己更新狀態
		if( iStatus ) {// 老鼠1沒有死亡, 相關資訊設定給老鼠2
			mouse1.Show(); 
			mouse2.UpdatePos(); // 老鼠2 根據跟隨對象更新自己的位置
			mouse2.Show(); 
		}
		else cout << "老鼠已經死亡,遊戲結束" << endl;
	}
	system("pause"); return(0);
}