#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy;		// �ѹ����_�l��m
	char m_cIcon;		
public:
	CMouse(int x, int y, char Icon) {	// �غc��
		m_ix = x; m_iy =y; m_cIcon = Icon; // �ѹ����_�l��m�P�ϥ�
		cout << "�غc���Q�I�s" << endl; system("pause");
	}
	CMouse(const CMouse &mouseA) {	// �غc��
		m_ix = mouseA.m_ix, m_iy = mouseA.m_iy; // �ѹ����_�l��m
		m_cIcon = mouseA.m_cIcon;
		cout << "�����غc���Q�I�s" << endl; system("pause");
	}
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(2,8,'&'); // �إ߮ɴN�|�۰ʩI�sCMouse �غc��
	CMouse mouseY(mouseX);	// mouseY �����e�Ӧ�mouseX
	// CMouse mouseY = mouseX; // �o�˼g�]��
	mouseY.Show(); // ���ѹ��ۤv�e�X�ۤv����m
	system("pause"); return(0);
}
