#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// �ѹ����s��
public:
	static int m_iCount; // �O���`�@���ʹX���ѹ�
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // �C���s���ѹ����ͮ�,�N�[1
	~CMouse() { m_iCount--; } // �C���ѹ��Q�^����,�N��1
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1);	// �ŧi�@�Ӫ���, �]�w�� Id �� 1
	CMouse mouse2[10];	// mouse2 ���㦳 10 �Ӫ��󪺰}�C, Id ���ϥιw�]�� 0
	cout << CMouse::m_iCount << "���ѹ��Q�إ�" << endl;
	system("pause"); return(0);
}