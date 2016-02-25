#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // 老鼠的起始位置
	char *m_pcIcon;	  // 字元指標變數, p 代表是 pointer
public:
	CMouse(int x, int y, char Icon) {	// 建構元
		m_ix = x; m_iy =y; m_pcIcon = new char; // 老鼠的起始位置與取得空間
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
	CMouse mouseX(5,3,'#'); // 建立時就會自動呼叫CMouse 建構元
	mouseX.Show(); // 讓老鼠自己畫出自己的位置
	system("pause"); return(0);
}