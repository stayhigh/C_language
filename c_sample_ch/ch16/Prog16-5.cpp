#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // 建構元,設定圖示
	virtual void Show() { cout << m_cIcon << endl; }
};
class CMouse : public  CCharacter {
public:
	CMouse(char cIcon = '@') : CCharacter( cIcon ) {}// CMouse 的建構元
	void Show() { cout << "^" << m_cIcon << "^" << endl; }
};
class CRabbit : public  CCharacter {
public:
	CRabbit(char cIcon = '*') : CCharacter( cIcon ) {}// CRabbit 的建構元
	void Show() { cout << "~" << m_cIcon << "~" << endl; }
};
int main(void) {
	int i;
	CCharacter *pChar[6];
	pChar[0] = new CCharacter;
	pChar[1] = new CMouse;  pChar[2] = new CMouse('#');
	pChar[3] = new CRabbit; pChar[4] = new CRabbit('^'); pChar[5] = new CRabbit('$');
	for( i = 0 ; i < 6 ; i++ ) pChar[i]->Show();
	for( i = 0 ; i < 6 ; i++ ) delete pChar[i]; // 釋放取得的物件空間
	system("pause"); return(0);
}