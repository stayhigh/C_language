#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy;		// 老鼠的起始位置
	char m_cIcon;		
public:
	CMouse(char Icon) {	// 建構元
		m_ix = 1; m_iy =1; // 老鼠的起始位置
		m_cIcon = Icon;
	}
	CMouse(int x, int y) {	// 建構元
		m_ix = x; m_iy =y; // 老鼠的起始位置
		m_cIcon = '@';
	}
	CMouse(int x, int y, char Icon) {	// 建構元
		m_ix = x; m_iy =y; // 老鼠的起始位置
		m_cIcon = Icon;
	}
	void Show() {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // 建立時就會自動呼叫 CMouse 建構元
	CMouse mouseX1(2,1); 
	CMouse mouseX2('&'); 
	mouseX2.Show(); // 讓老鼠自己畫出自己的位置, 自行更改不同的變數名稱
	system("pause"); return(0);
}