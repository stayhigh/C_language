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
		m_ix = x; m_iy = y; m_pcIcon = new char; // �ѹ����_�l��m�P���o�Ŷ�
		*m_pcIcon = Icon;
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