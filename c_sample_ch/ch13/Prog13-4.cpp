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
	CMouse(int x = 1, int y = 1, char Icon = '@') {	// 建構元
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
	CMouse mouseX(5,3,'#'); // 三個引數都自己給
	CMouse mouseX1(1,2);	// 第三個引數使用預設值
	CMouse mouseX2(5);		// 第二、三個引數使用預設值
	CMouse mouseX3;			// 全部使用預設值
//	CMouse mouseXE();		// 錯誤示範，不能使用 ()
	mouseX.Show(); // 讓老鼠自己畫出自己的位置, 自行更改不同的變數名稱
	system("pause"); return(0);
}