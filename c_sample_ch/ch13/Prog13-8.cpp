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
	}
	void Show() {
		system("cls"); // 清除螢幕上的顯示
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
	CMouse Compare(CMouse mouseT) {
		if( this->m_ix < mouseT.m_ix ) return(*this);
		else return(mouseT);
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); 
	CMouse mouseY(6,2);	
	mouseX.Compare(mouseY).Show(); // 顯示位置較低的老鼠
	system("pause"); return(0);
}
