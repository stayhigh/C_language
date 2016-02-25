#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // �غc��,�]�w�ϥ�
	virtual void Show() { cout << m_cIcon << endl; }
};
class CMouse : public  CCharacter {
public:
	CMouse(char cIcon = '@') : CCharacter( cIcon ) {}// CMouse ���غc��
	void Show() { cout << "^" << m_cIcon << "^" << endl; }
};
class CRabbit : public  CCharacter {
public:
	CRabbit(char cIcon = '*') : CCharacter( cIcon ) {}// CRabbit ���غc��
	void Show() { cout << "~" << m_cIcon << "~" << endl; }
};
int main(void) {
	int i;
	CCharacter *pChar[6];
	pChar[0] = new CCharacter;
	pChar[1] = new CMouse;  pChar[2] = new CMouse('#');
	pChar[3] = new CRabbit; pChar[4] = new CRabbit('^'); pChar[5] = new CRabbit('$');
	for( i = 0 ; i < 6 ; i++ ) pChar[i]->Show();
	for( i = 0 ; i < 6 ; i++ ) delete pChar[i]; // ������o������Ŷ�
	system("pause"); return(0);
}