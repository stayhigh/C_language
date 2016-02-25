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
		cout << "CCharacter �غc���Q�I�s" << endl;
	}
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << m_cIcon << endl; }
	void SetIcon(char cIcon) {m_cIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int m_iAttack;	// �]�w�����O
public:
	CMouse(int iValue=10) {
		m_iAttack = iValue;
		cout << "CMouse �غc���Q�I�s" << endl;
	}
	void ShowValue() { cout << "�����O=" << m_iAttack << endl; }
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