#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// �ѹ����s��
	static int m_iCount; // �O���`�@���ʹX���ѹ�
public:
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // �s�����󲣥ʹN�[1
	~CMouse() { m_iCount--; } // �C���ѹ��Q�^����,�N��1
	static void Show() { cout << m_iCount << "���ѹ��Q�إ�" << endl;
//		ShowId();
	}
	void ShowId() { cout << m_iId << endl; }
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1); 
	CMouse::Show();	// �q���O�I�s�R�A�����禡
	CMouse mouse2[10];
	mouse1.Show();	// �q�����ܼƩI�s�R�A�����禡
	system("pause"); return(0);
}