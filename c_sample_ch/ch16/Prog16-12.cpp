#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // 建構元,設定圖示
	virtual void Show() = 0; // 宣告為虛擬函式
	~CCharacter() { cout << "CCharacter 解構元被呼叫" << endl;}
};
class CAnimal : public  CCharacter {
protected:
	int m_iHP;
public:
	CAnimal(int iHP, char cIcon = '_') : CCharacter(cIcon){ m_iHP = iHP; }
	~CAnimal() { cout << "CAnimal 解構元被呼叫" << endl;}
};
class CMouse : public CAnimal {
public:
	CMouse(char cIcon = '@', int iHP = 10) : CAnimal(iHP, cIcon){}
	void Show() { cout << "^" << m_cIcon << "^" << ":HP = " << m_iHP << endl; }
	~CMouse() { cout << "CMouse 解構元被呼叫" << endl;}
};
int main(void) {
	CMouse m1('%',50); m1.Show();
	CCharacter *pChar = new CMouse;
	pChar->Show();
	delete pChar;
	system("pause"); return(0);
}