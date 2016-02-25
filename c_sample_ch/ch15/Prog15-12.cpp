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
	~CCharacter() {
		delete m_pcIcon;
		cout << "CCharacter �Ѻc���Q����" << endl;
		system("pause");
	}  // �Ѻc��, ����귽
	void Show() { cout << "(" << m_ix << "," << m_iy << ")" << *m_pcIcon << endl; }
	void SetIcon(char cIcon) {*m_pcIcon = cIcon;}
};
class CMouse : public CCharacter {
private:
	int *m_piAttack;	// ���⪺�����O
public:
	CMouse(int ix=1, int iy=1, char cIcon='@', int iValue=10) :
	CCharacter(ix,iy,cIcon) {
		m_piAttack = new int; *m_piAttack = iValue;
		cout << "CMouse �غc���Q�I�s" << endl;
	}
	CMouse(const CMouse &mA) : CCharacter( mA ) {	// �����غc��
		m_piAttack = new int;  *m_piAttack = *(mA.m_piAttack); // ���o�Ŷ��P�]�w�ϥ�
		cout << "CMouse �����غc���Q�I�s" << endl; // ��ܰT��
	}
	~CMouse() {
		delete m_piAttack;
		cout << "CMouse �Ѻc���Q����" << endl;
		system("pause");
	}  // �Ѻc��, ����귽
	void ShowValue() { cout << "�����O=" <<*m_piAttack << endl; }
};
int main(void) {
	CMouse mX(2,8,'@');
	CMouse mY(mX);
	mX.Show();
	mY.Show(); mY.ShowValue();
	system("pause"); return(0);
}