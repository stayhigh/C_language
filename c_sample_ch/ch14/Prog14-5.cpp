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
	CMouse(int x, int y, char Icon) {	// �غc��
		m_ix = x; m_iy = y; // �ѹ����_�l��m
		m_pcIcon = new char; // ���o�Ŷ�
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &mouseA) {	// �غc��
		m_ix = mouseA.m_ix; m_iy = mouseA.m_iy; // �ѹ����_�l��m
		m_pcIcon = new char; // ���o�Ŷ�
		*m_pcIcon = *(mouseA.m_pcIcon);
		cout << "�����غc���Q�I�s" << endl; system("pause");  // ��ܰT��
	}
	~CMouse() { delete m_pcIcon; }  // �Ѻc��, ����귽
	friend void ShowPos(CMouse m) {
		cout << "x = " << m.m_ix << "y = " << m.m_iy << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // �إ߮ɴN�|�۰ʩI�sCMouse �غc��
	ShowPos(mouseX);
	system("pause"); return(0);
}
