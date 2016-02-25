#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	int  m_ix, m_iy;	// 圖示的位置
	char m_cIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // 建構元	
		m_ix = ix; m_iy = iy; m_cIcon = cIcon; // 設定位置與圖示
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// 角色的攻擊力
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) { m_iAttack = iValue; }
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" <<
		 '~' << m_cIcon << '~' << endl; } // 改寫基礎類別中的 Show 函式
	void ShowValue() { cout << "攻擊力=" << m_iAttack << endl; }
};
class CTiger : public CCharacter {
private:
	int m_iStr;	// 角色的力量
public:
	CTiger(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iStr = iValue;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" <<
		 '^' << m_cIcon << '^' << endl; }
	void ShowValue() { cout << "力量=" << m_iStr << endl; }
};
int main(void) {
	CMouse mx(5,3,'@');
	CTiger tx(2,8,'#');
	mx.Show();
	tx.Show();
	system("pause"); return(0);
}