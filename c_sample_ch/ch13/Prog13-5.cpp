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
	CMouse(int x = 1, int y = 1, char Icon = '@'): m_ix(x), m_iy(y), m_cIcon(Icon) {
	// m_ix(x), m_iy(y), m_cIcon(Icon) ���P�� m_ix = x; m_iy = y; m_cIcon = Icon;
	}
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // �T�Ӥ޼Ƴ��ۤv��
	CMouse mouseX1(1,2); // �ĤT�Ӥ޼ƨϥιw�]��
	CMouse mouseX2(5); // �ĤG�B�T�Ӥ޼ƨϥιw�]��
	CMouse mouseX3; // �����ϥιw�]��
	mouseX.Show(); // ���ѹ��ۤv�e�X�ۤv����m, �ۦ��藍�P���ܼƦW��
	system("pause"); return(0);
}