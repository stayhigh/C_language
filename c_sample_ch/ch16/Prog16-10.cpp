#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // 建構元,設定圖示
	virtual void Show() = 0; // 宣告為虛擬函式
};
class CVillager : public  CCharacter {
protected:
	int m_iSex;
public:
	CVillager(char cIcon = '*',int iSex = 1):CCharacter(cIcon) { m_iSex = iSex; }
	void Show() { cout << "~" << m_cIcon << "~" << ":Sex = " << m_iSex << endl; }
};
class CAnimal : public  CCharacter {
protected:
	int m_iHP;
public:
	CAnimal(int iHP, char cIcon = '_'):CCharacter(cIcon){ m_iHP = iHP; }
	void Attack() { cout << "攻擊玩家" << endl;} // 一般的成員函式
};
class CMouse : public CAnimal {
public:
	CMouse(char cIcon = '@', int iHP = 10):CAnimal(iHP, cIcon){}
	void Show() { cout << "^" << m_cIcon << "^" << ":HP = " << m_iHP << endl; }
	void Attack() { cout << "特殊方式攻擊玩家" << endl;}
};
class CRabbit : public CAnimal {
public:
	CRabbit(char cIcon = '@', int iHP = 10):CAnimal(iHP, cIcon){}
	void Show() { cout << "^" << m_cIcon << "^" << ":HP = " << m_iHP << endl; }
};
int main(void) {
	CMouse m1('@',50);
	m1.Show();
	CVillager V1('$',2);
	V1.Show();
	system("pause"); return(0);
}