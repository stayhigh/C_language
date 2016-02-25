#include <iostream>
#include <iomanip>
using namespace std;
class CCharacter {
protected:
	int  m_ix, m_iy;	// �ϥܪ���m
	char *m_pcIcon;		
public:
	CCharacter(int ix=0, int iy=0, char cIcon='+'){ // �غc��	
		m_ix = ix; m_iy = iy; m_pcIcon = new char; *m_pcIcon = cIcon; // �]�w��m�P�ϥ�
		cout << "CCharacter �غc���Q�I�s" << endl;
	}
	CCharacter(const CCharacter &cA) {	// �����غc��
		m_ix = cA.m_ix; m_iy = cA.m_iy; // �]�w�ѹ����_�l��m
		m_pcIcon = new char;  *m_pcIcon = *(cA.m_pcIcon); // ���o�Ŷ��P�]�w�ϥ�
		cout << "CCharacter �����غc���Q�I�s" << endl; // ��ܰT��
	}
	~CCharacter() { delete m_pcIcon; }  // �Ѻc��, ����귽
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << *m_pcIcon << endl; }
	void SetIcon(char cIcon) {*m_pcIcon = cIcon;}
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