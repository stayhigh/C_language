#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // 老鼠的起始位置
	char *m_pcIcon;	  // 字元指標變數
public:
	CMouse(int x, int y, char Icon) {	// 建構元
		m_ix = x; m_iy = y; m_pcIcon = new char; // 老鼠的起始位置與取得空間
		*m_pcIcon = Icon;
	}
	~CMouse() { delete m_pcIcon; }  // 解構元, 釋放資源
	friend void ShowPos(CMouse m) {
		cout << "x = " << m.m_ix << "y = " << m.m_iy << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // 建立時就會自動呼叫CMouse 建構元
	ShowPos(mouseX);
	system("pause"); return(0);
}