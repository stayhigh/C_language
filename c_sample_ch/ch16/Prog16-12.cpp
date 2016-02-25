#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // �غc��,�]�w�ϥ�
	virtual void Show() = 0; // �ŧi�������禡
	~CCharacter() { cout << "CCharacter �Ѻc���Q�I�s" << endl;}
};
class CAnimal : public  CCharacter {
protected:
	int m_iHP;
public:
	CAnimal(int iHP, char cIcon = '_') : CCharacter(cIcon){ m_iHP = iHP; }
	~CAnimal() { cout << "CAnimal �Ѻc���Q�I�s" << endl;}
};
class CMouse : public CAnimal {
public:
	CMouse(char cIcon = '@', int iHP = 10) : CAnimal(iHP, cIcon){}
	void Show() { cout << "^" << m_cIcon << "^" << ":HP = " << m_iHP << endl; }
	~CMouse() { cout << "CMouse �Ѻc���Q�I�s" << endl;}
};
int main(void) {
	CMouse m1('%',50); m1.Show();
	CCharacter *pChar = new CMouse;
	pChar->Show();
	delete pChar;
	system("pause"); return(0);
}