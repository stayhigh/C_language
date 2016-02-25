#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // 老鼠的起始位置
	char *m_pcIcon;	// 字元指標變數
public:
	CMouse(int x, int y, char Icon) {	// 建構元
		m_ix = x; m_iy = y; m_pcIcon = new char; // 老鼠的起始位置與取得空間
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &mouseA) {	// 建構元
		m_ix = mouseA.m_ix; m_iy = mouseA.m_iy; // 老鼠的起始位置
		m_pcIcon = new char; // 取得空間
		*m_pcIcon = *(mouseA.m_pcIcon); // 將傳入的老鼠圖示填入
		cout << "拷貝建構元被呼叫" << endl; system("pause");  // 顯示訊息
	}
	~CMouse() { delete m_pcIcon; }  // 解構元, 釋放資源
	void Show() { system("cls"); // 清除螢幕顯示
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // 建立時就會自動呼叫CMouse 建構元
	CMouse mouseY(mouseX);
	mouseY.Show(); // 讓老鼠自己畫出自己的位置
	system("pause"); return(0);
}