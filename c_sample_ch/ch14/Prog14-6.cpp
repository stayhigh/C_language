#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
public:
	int m_ix, m_iy; // �ѹ����_�l��m
	char *m_pcIcon;	  // �r�������ܼ�
	CMouse(int x=1, int y=1, char Icon='@') {	// �غc��
		m_ix = x; m_iy =y; m_pcIcon = new char;// �ѹ����_�l��m�P���o�Ŷ�
		*m_pcIcon = Icon;
	}
	~CMouse() { delete m_pcIcon; } // �Ѻc��, ����귽
	void Show() {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << *m_pcIcon << endl;
	}
};
int main(void)
{
	CMouse *pMx = new CMouse;
	pMx->m_ix = 5; (*pMx).m_iy = 7; // �]�w�ѹ�����m
	*(pMx->m_pcIcon) = '#';	// �]�w�ѹ����ϥ�
	pMx->Show();			// �b�ù��W��ܦѹ�
	delete pMx;				// ������o���귽
	system("pause"); return(0);
}