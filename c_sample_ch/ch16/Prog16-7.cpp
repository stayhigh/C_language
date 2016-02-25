#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	char m_cIcon;
public:
	CCharacter(char cIcon='+'){ m_cIcon = cIcon; } // 建構元,設定圖示
	~CCharacter() {cout << "CCharacter 解構元被呼叫" << endl; }
	virtual void Show() { cout << m_cIcon << endl; }; // 宣告為虛擬函式
};
class CMouse : public  CCharacter {
public:
	CMouse(char cIcon = '@') : CCharacter( cIcon ) {}// CMouse 的建構元
	~CMouse() {cout << "CMouse 解構元被呼叫" << endl; }
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