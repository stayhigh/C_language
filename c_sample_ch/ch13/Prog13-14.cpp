#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iWeight;	// �ѹ������q
public:
	CMouse(int iw=0) {m_iWeight = iw;} // �]�w�ѹ������q
	int operator+(CMouse &mouse) { // �w�q + �B��l. �O�o�ϥζǰѷөI�s
		return(m_iWeight + mouse.m_iWeight);
	}
};
int main(void)
{
	CMouse mouse1(100); 
	CMouse mouse2(235);
	cout << "�Ⱖ�ѹ��@��" <<  mouse1 + mouse2 << endl;
	system("pause"); return(0);
}