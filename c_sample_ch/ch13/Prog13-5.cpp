#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy;		// ρ公癬﹍竚
	char m_cIcon;		
public:
	CMouse(int x = 1, int y = 1, char Icon = '@'): m_ix(x), m_iy(y), m_cIcon(Icon) {
	// m_ix(x), m_iy(y), m_cIcon(Icon) 单 m_ix = x; m_iy = y; m_cIcon = Icon;
	}
	void Show() {
		system("cls"); // 睲埃棵辊陪ボ
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // ま计常倒
	CMouse mouseX1(1,2); // 材ま计ㄏノ箇砞
	CMouse mouseX2(5); // 材ま计ㄏノ箇砞
	CMouse mouseX3; // 场ㄏノ箇砞
	mouseX.Show(); // 琵ρ公礶竚, ︽эぃ跑计嘿
	system("pause"); return(0);
}