#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10	// �w�q�i���ʪ��d��
#define Y_MAX 10	// �w�q�i���ʪ��d��
void ShowMouse();	// �b�ù��W��ܦѹ�����m
int ix = 1, iy =1;	// �ѹ����_�l��m
int iStatus = 1;	// 1:���`���A, 2:�b��ɤW, 0: ���`
char cIcon = '@';	// �x�s�w�]���ѹ��ϥ�
int main(void) 
{
	char cIn;
	ShowMouse();	// ��ܦѹ�����m
	while( iStatus != 0 ) { // �u�n�ѹ��٦b���`���A�N�~�����ϥΪ̿�J
		cIn = getch();
		switch(cIn) {
			case 'w': // ���W. ���ѹ���m,�îھڷs����m,��s�ѹ������A
				break;
			case 's': // ���U
				break;
			case 'a': // ����
				break;
			case 'd': // ���k
				break;
		}
		if( iStatus ) ShowMouse(); // �u�n�ѹ��S�����`,�N������s�ѹ���m�����
	}
	system("pause"); return(0);
}
void ShowMouse()
{
	system("cls"); // �M���ù��W�����
	for( int i = 1 ; i <= ix ; i++ ) cout << endl;
	cout << setw(iy+1) << setfill(' ') << cIcon << endl;
}