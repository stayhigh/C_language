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
	CMouse(char Icon) {	// �غc��
		m_ix = 1; m_iy =1; // �ѹ����_�l��m
		m_cIcon = Icon;
	}
	CMouse(int x, int y) {	// �غc��
		m_ix = x; m_iy =y; // �ѹ����_�l��m
		m_cIcon = '@';
	}
	CMouse(int x, int y, char Icon) {	// �غc��
		m_ix = x; m_iy =y; // �ѹ����_�l��m
		m_cIcon = Icon;
	}
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // �إ߮ɴN�|�۰ʩI�s CMouse �غc��
	CMouse mouseX1(2,1); 
	CMouse mouseX2('&'); 
	mouseX2.Show(); // ���ѹ��ۤv�e�X�ۤv����m, �ۦ��藍�P���ܼƦW��
	system("pause"); return(0);
}