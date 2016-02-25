#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
private:
	int  m_ix, m_iy;	// 圖示的位置
	char m_cIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // 建構元	
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
	CMouse(int iValue=10) {
		m_iAttack = iValue;
		cout << "CMouse 建構元被呼叫" << endl;
	}
	void ShowValue() { cout << "攻擊力=" << m_iAttack << endl; }
};
int main(void) {
	CCharacter npc(3,5);
	CMouse mx;
	npc.Show();
	mx.SetIcon('@');
	mx.Show();
	mx.ShowValue();
	cout << "sizeof(npc) = " << sizeof(npc) << endl; 
	cout << "sizeof(mx)  = "  << sizeof(mx) << endl;
	system("pause"); return(0);
}