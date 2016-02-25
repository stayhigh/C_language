#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // �ѹ����_�l��m
	char *m_pcIcon;	  // �r�������ܼ�
public:
	CMouse(int x=1, int y=1, char Icon='@') { // �غc��
		m_ix = x; m_iy =y; m_pcIcon = new char; // �_�l��P���o�Ŷ�
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &m) { // �����غc��
		m_ix = m.m_ix; m_iy = m.m_iy; m_pcIcon = new char;  // �_�l��m�P���o�Ŷ�
		*m_pcIcon = *(m.m_pcIcon);
	}
	~CMouse() { delete m_pcIcon; } // �Ѻc��, ����귽
	CMouse& operator= (const CMouse &m ) { // �]�w�B��l
		m_ix = m.m_ix; m_iy = m.m_iy; *m_pcIcon = *(m.m_pcIcon);
		return(*this);
	}
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse mouse1(2,8,'&'); // �إ߮ɴN�|�۰ʩI�sCMouse �غc��
	CMouse mouse2;
	CMouse mouse3;
	mouse3 = mouse2 = mouse1;
	mouse3.Show(); // ���ѹ��ۤv�e�X�ۤv����m
	system("pause"); return(0);
}