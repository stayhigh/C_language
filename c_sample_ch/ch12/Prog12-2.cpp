#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10	// �w�q�i���ʪ��d��
#define Y_MAX 10	// �w�q�i���ʪ��d��
void ShowMouse();
int ix = 1, iy =1;	// �ѹ����_�l��m
int iStatus = 1;	// 1:���`���A, 2:�b��ɤW, 0: ���`
char cIcon = '@';	// �s�W�x�s�ѹ����ϥ�
int main(void)
{
	char cIn;
	ShowMouse();
	while( iStatus != 0 ) { // �u�n�ѹ��٦b���`���A�N�~�����ϥΪ̿�J
		cIn = getch();
		switch(cIn) {
			case 'w': // ���W,���ѹ���m,�îھڷs����m,��s�ѹ������A
				ix--;
				if( ix < 0 ) iStatus = 0; // �ѹ��W�L���,���`
				else if( ix == 0 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
				break;
			case 's': // ���U
				ix++;
				if( ix > X_MAX + 1 ) iStatus = 0;		// �ѹ��W�L���,���`
				else if( ix == X_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
				break;
			case 'a': // ����
				iy--;
				if( iy < 0 ) iStatus = 0; // �ѹ��W�L���,���`
				else if( iy == 0 )  {iStatus = 2; cIcon = 'Q';}// ������ɤW
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';} 
				break;
			case 'd': // ���k
				iy++;
				if( iy >  Y_MAX + 1 ) iStatus = 0; // �ѹ��W�L���,���`
				else if( iy == Y_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';}
				break;
		}
		if( iStatus ) ShowMouse(); // �u�n�ѹ��S�����`,�N������s�ѹ���m�����
		else cout << "�ѹ��w�g���`, �C������" << endl;		
	}
	system("pause"); return(0);
}
void ShowMouse()
{
	system("cls"); // �M���ù��W�����
	for( int i = 1 ; i <= ix ; i++ ) cout << endl;
	cout << setw(iy+1) << setfill(' ') << cIcon << endl;
}