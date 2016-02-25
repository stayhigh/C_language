#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // �w�q�i���ʪ��d��
#define Y_MAX 10 // �w�q�i���ʪ��d��
class CMouse {
private:
	int  m_ix,  m_iy;	// �ѹ����_�l��m
	CMouse *m_pTarget;	// ���V�Q���H�̪������ܼ�
	int  m_iStatus;	
	bool m_bTracer; // �]�w�O�_�����H��
	char m_cIcon;		
	char m_cMicon[2]; //�x�s��ؤ��P���ϥ�
public:
	CMouse() {	// �غc��
		m_ix = 1; m_iy =1; // �ѹ����_�l��m
		m_iStatus = 1;   // 1:���`���A, 2:���}��� 0:���`���A
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
		m_bTracer = false;	// �D���H��
	}
	void Show();
	void SetPos(int x, int y) {	m_ix = x; m_iy = y; }
	void SetIcon(char cN, char cB) { m_cIcon = m_cMicon[0] = cN; m_cMicon[1] = cB;}
	int  Update(char cIn);
	void GetPos(int *ix, int *iy)  {*ix = m_ix;  *iy = m_iy;}
	void SetTracer(bool bT) { m_bTracer = bT;}
	int  GetStatus(){return(m_iStatus);}
	void SetTarget(CMouse *mouse) {m_pTarget = mouse;}
	void UpdatePos() {	// ���o m_Target �ҫ��V�����󪺮y��
		int ix, iy;
		m_pTarget->GetPos(&ix, &iy);	// ���o���V���󪺮y��
		m_ix = ix+6;  m_iy = iy;	// ��s�ۤv����m
	}
};
void CMouse::Show() {
	if( !m_bTracer ) system("cls"); // �M���ù��W�����
	for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
	cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // ���W�A���ѹ���m�A�îھڷs����m�A��s�ѹ������A
				m_ix--;
				if( m_ix < 0 ) m_iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( m_ix == 0 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 's': // ���U
				m_ix++;
				if( m_ix > X_MAX + 1 ) m_iStatus = 0;		// �ѹ��W�L��ɡA���`
				else if( m_ix == X_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_iy >= 1 && m_iy <= Y_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
			case 'a': // ����
				m_iy--;
				if( m_iy < 0 ) m_iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( m_iy == 0 )  {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];} 
				break;
			case 'd': // ���k
				m_iy++;
				if( m_iy >  Y_MAX + 1 ) m_iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( m_iy == Y_MAX+1 ) {m_iStatus = 2; m_cIcon = m_cMicon[1];}// ������ɤW
				else if( m_ix >= 1 && m_ix <= X_MAX ) {m_iStatus = 1; m_cIcon = m_cMicon[0];}
				break;
		}
	return(m_iStatus);	// �Ǧ^�ѹ������A
}
int main(void) {
	char cIn;
	int iStatus;
	CMouse mouse1, mouse2; // �إ� mouse1 �P mouse2
	mouse1.Show(); // ���ѹ�1 �e�X�ۤv����m
	mouse2.SetTarget(&mouse1);	// �]�w�ѹ�2 �����H��H
	mouse2.SetTracer(true);
	mouse2.UpdatePos();	// �ѹ�2 �ھڸ��H��H��s�ۤv����m
	mouse2.Show();		// ���ѹ�2 �e�X�ۤv
	iStatus = mouse1.GetStatus();
	while( iStatus != 0 ) { 
		cIn = getch();
		iStatus = mouse1.Update(cIn); // ���ѹ��ۤv��s���A
		if( iStatus ) {// �ѹ�1�S�����`, ������T�]�w���ѹ�2
			mouse1.Show(); 
			mouse2.UpdatePos(); // �ѹ�2 �ھڸ��H��H��s�ۤv����m
			mouse2.Show(); 
		}
		else cout << "�ѹ��w�g���`,�C������" << endl;
	}
	system("pause"); return(0);
}