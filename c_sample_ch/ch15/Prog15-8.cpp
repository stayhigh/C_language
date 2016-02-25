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
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// ���⪺�����O
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) { m_iAttack = iValue; }
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" <<
		 '~' << m_cIcon << '~' << endl; } // ��g��¦���O���� Show �禡
	void ShowValue() { cout << "�����O=" << m_iAttack << endl; }
};
class CTiger : public CCharacter {
private:
	int m_iStr;	// ���⪺�O�q
public:
	CTiger(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_iStr = iValue;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" <<
		 '^' << m_cIcon << '^' << endl; }
	void ShowValue() { cout << "�O�q=" << m_iStr << endl; }
};
int main(void) {
	CMouse mx(5,3,'@');
	CTiger tx(2,8,'#');
	mx.Show();
	tx.Show();
	system("pause"); return(0);
}