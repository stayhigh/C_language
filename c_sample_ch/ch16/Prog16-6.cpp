#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // �غc��,�]�w�ϥ�
	virtual void Show() = 0; // �ŧi���µ����禡
};
class CVillager : public  CCharacter {
public:
	CVillager(char cIcon = '+') : CCharacter( cIcon ) {}// CMouse ���غc��
	void Show() { cout << m_cIcon << endl; }
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
	CCharacter *pChar[5];
	pChar[0] = new CVillager;
	pChar[1] = new CMouse;  pChar[2] = new CMouse('#');
	pChar[3] = new CRabbit; pChar[4] = new CRabbit('^');
	for( i = 0 ; i < 5 ; i++ ) pChar[i]->Show();
	for( i = 0 ; i < 5 ; i++ ) delete pChar[i]; // ������o������Ŷ�
	system("pause"); return(0);
}