#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// �ѹ����s��
	static int m_iCount; // �O���`�@���ʹX���ѹ�
public:
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // �C���s���ѹ����ͮ�,�N�[1
	~CMouse() { m_iCount--; } // �C���ѹ��Q�^����,�N��1
	void Show() { cout << m_iCount << "���ѹ��Q�إ�" << endl; }
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1); 
	CMouse mouse2[10];
	CMouse mouse3 = mouse1;
	mouse1.Show();
	system("pause"); return(0);
}