#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // 建構元,設定圖示
	void Show() { cout << m_cIcon << endl; }
};
class CMouse : public  CCharacter {
private:
	int m_iShape;	// 設定外型編號
public:
	CMouse(char cIcon = '@', int iVal=1)
	: CCharacter( cIcon )  { m_iShape = iVal; } // CMouse 的建構元
	void Show() { 
		if( m_iShape ) cout << "~" << m_cIcon << "~" << endl;
		else cout << "^" << m_cIcon << "^" << endl;
	}
};
void ShowCharacter(CCharacter &ch) { ch.Show(); } // 一般函式
int main(void) {
	CCharacter npc;
	CMouse m1('@',0);
	npc.Show(); m1.Show();
	ShowCharacter(npc); ShowCharacter(m1);
	system("pause"); return(0);
}