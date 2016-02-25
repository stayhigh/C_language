#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class CSticker {
private:
	int  m_iy;	// �ϥܪ���m
	char m_cIcon;		
public:
	CSticker() {	
		m_iy = rand()%20; // �ϥܪ���m,�H�üƲ���
		m_cIcon = '@';	  // ��ܪ��ϥ�
	}
	void Show() { cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl; }
};
class CPainter {
private:
	CSticker *pSticker; // �����ܼ�
public:
	CPainter()  { pSticker = new CSticker[10]; }
	~CPainter() { delete [] pSticker; }
	void Show() {
		for(int i = 0 ; i < 10 ; i++ ) (pSticker+i)->Show(); // �I�s Show �禡
	}
};
int main(void) {
	srand( (unsigned)time( NULL ) ); // �]�w�üƲ��;�����l��
	CPainter pic;
	pic.Show();
	system("pause"); return(0);
}