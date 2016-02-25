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
	void Show(int x, int y) {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= x ; i++ ) cout << endl;
		cout << setw(y+1) << setfill(' ') << m_cIcon << endl;
	}
	void Show(int x, int y, char cIcon) {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= x ; i++ ) cout << endl;
		cout << setw(y+1) << setfill(' ') << cIcon << endl;
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); // �T�Ӥ޼Ƴ��ۤv��
	mouseX.Show(); system("pause");		// ���ѹ��ۤv�e�X�ۤv����m
	mouseX.Show(1,4); system("pause");	// �b(1,4)��m��ܦѹ����w�]�ϥ�
	mouseX.Show(3,6,'@'); system("pause");	// �b(3,6)��m��ܦѹ����ϥ� @
	system("pause"); return(0);
}