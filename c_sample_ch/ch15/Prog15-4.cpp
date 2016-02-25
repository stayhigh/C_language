#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
private:
	int  m_ix, m_iy;	// �ϥܪ���m
	char m_cIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // �غc��	
		m_ix = ix; m_iy = iy; m_cIcon = cIcon; // �]�w��m�P�ϥ�
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// �]�w�����O
public:
	CMouse(int iValue=10) {	m_iAttack = iValue;	}
	CMouse(char cIcon, int iValue=10) : CCharacter(1,1,cIcon) {
		m_iAttack = iValue;
		cout << "CMouse �]�w����ϥܫغc���Q�I�s" << endl;
	} 
	void ShowValue() { cout << "�����O=" << m_iAttack << endl; }
};
int main(void) {
	CMouse mx1, mx2('@',6);
	mx1.Show();	mx1.ShowValue();
	mx2.Show();	mx2.ShowValue();
	system("pause"); return(0);
}