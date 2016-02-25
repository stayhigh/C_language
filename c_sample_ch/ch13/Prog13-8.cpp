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
	}
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
	CMouse Compare(CMouse mouseT) {
		if( this->m_ix < mouseT.m_ix ) return(*this);
		else return(mouseT);
	}
};
int main(void)
{
	CMouse mouseX(5,3,'#'); 
	CMouse mouseY(6,2);	
	mouseX.Compare(mouseY).Show(); // ��ܦ�m���C���ѹ�
	system("pause"); return(0);
}
