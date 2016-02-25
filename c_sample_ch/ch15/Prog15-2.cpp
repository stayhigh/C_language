#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
private:
	int  m_ix, m_iy;	// 圖示的位置
	char m_cIcon;		
public:
	CCharacter(int ix, int iy, char cIcon){ // 建構元	
		m_ix = ix; m_iy = iy; m_cIcon = cIcon; // 設定位置與圖示
		cout << "CCharacter 建構元被呼叫" << endl;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// 設定攻擊力
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iAttack = iValue;
		cout << "CMouse 建構元被呼叫" << endl;
	}
	void ShowValue() { cout << "攻擊力=" << m_iAttack << endl; }
};
int main(void) {
	CMouse mx1, mx2(1,5,'$', 5);
	mx1.Show();
	mx2.Show(); mx2.ShowValue();
	system("pause"); return(0);
}