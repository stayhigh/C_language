#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy;	// �ѹ����_�l��m
	char *m_pcIcon;	// �r�������ܼ�
public:
	CMouse(int x=1, int y=1, char Icon='@') {	// �޼Ƴ]�w�w�]�Ȫ��غc��
		m_ix = x; m_iy = y; m_pcIcon = new char;	// �ѹ����_�l��m�P�x�s�Ŷ�
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &m) {	// �����غc��
		m_ix = m.m_ix; m_iy = m.m_iy; m_pcIcon = new char; // �ѹ����_�l��m�P���o�Ŷ�
		*m_pcIcon = *(m.m_pcIcon);
	}
	~CMouse() { delete m_pcIcon; } // �Ѻc��, ����귽
	void Show() {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'&'); // �إ߮ɴN�|�۰ʩI�sCMouse �غc��
	CMouse *pMouseY = new CMouse(mouseX);	
	pMouseY->Show(); // ���ѹ��ۤv�e�X�ۤv����m
	delete pMouseY;
	system("pause"); return(0);
}