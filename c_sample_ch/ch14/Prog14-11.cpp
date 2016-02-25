#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // �w�q�i���ʪ��d��
#define Y_MAX 10 // �w�q�i���ʪ��d��
bool g_bBoss = false; // �����ܼ�,false: ���`���A, true: ���ê��A
class CMouse {
private:
	int m_ix, m_iy;		// �ѹ����_�l��m
	int m_iStatus;	
	char m_cIcon;		
	char m_cMicon[2]; //�x�s��ؤ��P���ϥ�
public:
	CMouse() {	// �غc��
		m_ix = 1; m_iy =1; // �ѹ����_�l��m
		m_iStatus = 1;   // 1:���`���A, 2:���}��� 0:���`���A
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
	}
	void SetPos(int x, int y) {	m_ix = x; m_iy = y; }
	void SetIcon(char cN, char cB) { m_cIcon = m_cMicon[0] = cN; m_cMicon[1] = cB;}
	int  Update(char cIn);
	int  GetStatus(){return(m_iStatus);}
	void Show();
};
void CMouse::Show() {
	system("cls"); // �M���ù��W�����
	if( g_bBoss ) {
		for( int i = 1 ; i <= X_MAX ; i++ ) 
			cout << "********************" << endl; //�C����� 20 �ӬP�P
	}
	else {
		for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
		cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
	}
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // ���W,���ѹ���m,�îھڷs����m,��s�ѹ������A
				m_ix--;
				if( m_ix < 0 ) m_iStatus = 0; // �ѹ��W�L���,���`
				else if( m_ix == 0 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 's': // ���U
				m_ix++;
				if( m_ix > X_MAX + 1 ) m_iStatus = 0;		// �ѹ��W�L���,���`
				else if( m_ix == X_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 'a': // ����
				m_iy--;
				if( m_iy < 0 ) m_iStatus = 0; // �ѹ��W�L���,���`
				else if( m_iy == 0 )  {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];} 
				break;
			case 'd': // ���k
				m_iy++;
				if( m_iy >  Y_MAX + 1 ) m_iStatus = 0; // �ѹ��W�L���,���`
				else if( m_iy == Y_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
		}
	return(m_iStatus);	// �Ǧ^�ѹ������A
}
int main(void) {
	char cIn;
	int iStatus;
	CMouse mouseX; // �إ߮ɴN�|�۰ʩI�s CMouse �غc��
	mouseX.Show(); // ���ѹ��ۤv�e�X�ۤv����m
	iStatus = mouseX.GetStatus();
	while( iStatus != 0 ) { // �u�n�ѹ��٦b���`���A�N�~�����ϥΪ̿�J
		cIn = getch();
		if( cIn == 'b' ) g_bBoss = !g_bBoss; // �P�_�O�_���U���� b 
		iStatus = mouseX.Update(cIn); // ���ѹ��ۤv��s���A
		if( iStatus ) mouseX.Show(); // �ѹ��S�����`, �N������s�ѹ���m�����
		else cout << "�ѹ��w�g���`,�C������" << endl;
	}
	system("pause"); return(0);
}