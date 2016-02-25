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
	CMouse(int x, int y, char Icon) {	// 建構元
		m_ix = x; m_iy =y; m_cIcon = Icon; // 老鼠的起始位置
		cout << "建構元被呼叫" << endl; system("pause");
	}
	void Show() {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(2,8,'&'); // 建立時就會自動呼叫 CMouse 建構元
	//CMouse mouseY(mouseX);	// mouseY 的內容來自 mouseX
	CMouse mouseY = mouseX; // 這樣寫也行
	mouseY.Show(); // 讓老鼠自己畫出自己的位置
	system("pause"); return(0);
}