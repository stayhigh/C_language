#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	int  m_ix, m_iy;	// 圖示的位置
	char *m_pcIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // 建構元	
		m_ix = ix; m_iy = iy; m_pcIcon = new char; *m_pcIcon = cIcon; // 設定位置與圖示
		cout << "CCharacter 建構元被呼叫" << endl;
	}
	CCharacter(const CCharacter &cA) {	// 拷貝建構元
		m_ix = cA.m_ix; m_iy = cA.m_iy; // 設定老鼠的起始位置
		m_pcIcon = new char;  *m_pcIcon = *(cA.m_pcIcon); // 取得空間與設定圖示
		cout << "CCharacter 拷貝建構元被呼叫" << endl; // 顯示訊息
	}
	~CCharacter() { delete m_pcIcon; }  // 解構元, 釋放資源
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << *m_pcIcon << endl; }
	void SetIcon(char cIcon) {*m_pcIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// 角色的攻擊力
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iAttack = iValue; cout << "CMouse 建構元被呼叫" << endl;
	}
	void ShowValue() { cout << "攻擊力=" << m_iAttack << endl; }
};
int main(void) {
	CMouse mX(2,8,'@');
	CMouse mY(mX);
	CMouse mZ = mY;
	mX.Show();
	mY.Show(); mY.ShowValue();
	mZ.Show(); mZ.ShowValue();
	system("pause"); return(0);
}