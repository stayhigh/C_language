#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_ix, m_iy;	// �ѹ����y��
public:
	CMouse(int ix=0, int iy=0) { m_ix = ix; m_iy = iy;} // �]�w�ѹ�����m
	bool operator>(CMouse &mouse) { // �w�q > �B��l. �O�o�ϥζǰѷөI�s
		int d1, d2;
		d1 = this->m_ix*this->m_ix+this->m_iy*this->m_iy;
		d2 = mouse.m_ix*mouse.m_ix+mouse.m_iy*mouse.m_iy;
		if( d1 > d2 ) return(true); // �����������,�Ӥ�����}�󸹪��p��
		else return(false);
	}
};
int main(void)
{
	CMouse mouse1(4,4); 
	CMouse mouse2(1,5);
	if( mouse1 > mouse2 ) cout << "mouse1 �����I�����" << endl;
	else cout << "mouse2 �����I�����" << endl;
	system("pause"); return(0);
}