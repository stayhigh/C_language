#include <iostream>
#include <iomanip>
#include "CMouse.h"
using namespace std;
#define X_MAX 10 // �w�q�i���ʪ��d��
#define Y_MAX 10 // �w�q�i���ʪ��d��
void CMouse::Show() {
	if( !m_bTracer ) system("cls"); // �M���ù��W�����
	for( int i = 1 ; i <= m_ix ; i++ ) cout << endl;
	cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl;
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // ���W�A���ѹ���m,�îھڷs����m,��s�ѹ������A
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