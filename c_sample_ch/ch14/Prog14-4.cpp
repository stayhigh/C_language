#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy; // �ѹ����_�l��m
	char *m_pcIcon;	// �r�������ܼ�
public:
	CMouse(int x, int y, char Icon) {	// �غc��
		m_ix = x; m_iy = y; m_pcIcon = new char; // �ѹ����_�l��m�P���o�Ŷ�
		*m_pcIcon = Icon;
	}
	CMouse(const CMouse &mouseA) {	// �غc��
		m_ix = mouseA.m_ix; m_iy = mouseA.m_iy; // �ѹ����_�l��m
		m_pcIcon = new char; // ���o�Ŷ�
		*m_pcIcon = *(mouseA.m_pcIcon); // �N�ǤJ���ѹ��ϥܶ�J
		cout << "�����غc���Q�I�s" << endl; system("pause");  // ��ܰT��
	}
	~CMouse() { delete m_pcIcon; }  // �Ѻc��, ����귽
	void Show() { system("cls"); // �M���ù����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // �إ߮ɴN�|�۰ʩI�sCMouse �غc��
	CMouse mouseY(mouseX);
	mouseY.Show(); // ���ѹ��ۤv�e�X�ۤv����m
	system("pause"); return(0);
}