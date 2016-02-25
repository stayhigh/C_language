#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
public:
	int m_ix, m_iy; // 老鼠的起始位置
	char *m_pcIcon;	  // 字元指標變數
	CMouse(int x=1, int y=1, char Icon='@') {	// 建構元
		m_ix = x; m_iy =y; m_pcIcon = new char;// 老鼠的起始位置與取得空間
		*m_pcIcon = Icon;
	}
	~CMouse() { delete m_pcIcon; } // 解構元, 釋放資源
	void Show() {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse *pMx = new CMouse;
	pMx->m_ix = 5; (*pMx).m_iy = 7; // 設定老鼠的位置
	*(pMx->m_pcIcon) = '#';	// 設定老鼠的圖示
	pMx->Show();			// 在螢幕上顯示老鼠
	delete pMx;				// 釋放取得的資源
	system("pause"); return(0);
}