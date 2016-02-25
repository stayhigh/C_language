#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
private:
	int  m_ix, m_iy;	// �ϥܪ���m
	char m_cIcon;		
public:
	CCharacter(int ix, int iy, char cIcon){ // �غc��	
		m_ix = ix; m_iy = iy; m_cIcon = cIcon; // �]�w��m�P�ϥ�
		cout << "CCharacter �غc���Q�I�s" << endl;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// �]�w�����O
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iAttack = iValue;
		cout << "CMouse �غc���Q�I�s" << endl;
	}
	void ShowValue() { cout << "�����O=" << m_iAttack << endl; }
};
int main(void) {
	CMouse mx1, mx2(1,5,'$', 5);
	mx1.Show();
	mx2.Show(); mx2.ShowValue();
	system("pause"); return(0);
}