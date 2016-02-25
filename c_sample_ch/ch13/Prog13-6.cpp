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
	CMouse(int x = 1, int y = 1, char Icon = '@'): m_ix(x), m_iy(y), m_cIcon(Icon) {
	// m_ix(x), m_iy(y), m_cIcon(Icon) 等同於 m_ix = x; m_iy = y; m_cIcon = Icon;
	}
	void Show() {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
	void Show(int x, int y) {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= x ; i++ ) cout << endl;
		cout << setw(y+1) << setfill(' ') << m_cIcon << endl;
	}
	void Show(int x, int y, char cIcon) {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= x ; i++ ) cout << endl;
		cout << setw(y+1) << setfill(' ') << cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // 三個引數都自己給
	mouseX.Show(); system("pause");		// 讓老鼠自己畫出自己的位置
	mouseX.Show(1,4); system("pause");	// 在(1,4)位置顯示老鼠的預設圖示
	mouseX.Show(3,6,'@'); system("pause");	// 在(3,6)位置顯示老鼠的圖示 @
	system("pause"); return(0);
}