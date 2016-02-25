#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // �غc��,�]�w�ϥ�
	~CCharacter() {cout << "CCharacter �Ѻc���Q�I�s" << endl; }
	virtual void Show() { cout << m_cIcon << endl; }; // �ŧi�������禡
};
class CMouse : public  CCharacter {
public:
	CMouse(char cIcon = '@') : CCharacter( cIcon ) {}// CMouse ���غc��
	~CMouse() {cout << "CMouse �Ѻc���Q�I�s" << endl; }
	void Show() { cout << "^" << m_cIcon << "^" << endl; }
};
int main(void) {
	CCharacter *pChar2Char = new CCharacter;
	CCharacter *pChar2Mouse = new CMouse;
	CMouse *pMouse = new CMouse;
	delete pChar2Char;
	delete pMouse;
	delete pChar2Mouse;
	system("pause"); return(0);
}