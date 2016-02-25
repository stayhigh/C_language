#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	int  m_ix, m_iy;	// �ϥܪ���m
	char m_cIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // �غc��	
		m_ix = ix; m_iy = iy; m_cIcon = cIcon; // �]�w��m�P�ϥ�
		cout << "CCharacter �غc���Q�I�s" << endl;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// ���⪺�����O
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iAttack = iValue; cout << "CMouse �غc���Q�I�s" << endl;
	}
	void ShowValue() { cout << "�����O=" << m_iAttack << endl; }
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