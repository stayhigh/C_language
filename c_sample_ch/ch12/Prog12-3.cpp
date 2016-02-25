#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // �w�q�i���ʪ��d��
#define Y_MAX 10 // �w�q�i���ʪ��d��
class CMouse // �ѹ����� V1.0 ��
{
public:
	int ix, iy;		// �ѹ����_�l��m
	int iStatus;	
	char cIcon;
	void Init() {
		ix = 1, iy =1; // �ѹ����_�l��m
		iStatus = 1;   // 1 : ���`���A, 2: ���}��� 0: ���`���A
		cIcon ='@';
	}
	int  Update(char cIn);
	void Show() {
		system("cls"); // �M���ù��W�����
		for( int i = 1 ; i <= ix ; i++ ) cout << endl;
		cout << setw(iy+1) << setfill(' ') << cIcon << endl;
	}
};
int  CMouse::Update(char cIn)
{
	switch(cIn) {
		case 'w': // ���W�A���ѹ���m�A�îھڷs����m�A��s�ѹ������A
			ix--;
			if( ix < 0 ) iStatus = 0; // �ѹ��W�L��ɡA���`
			else if( ix == 0 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
			else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
			break;
		case 's': // ���U
			ix++;
			if( ix > X_MAX + 1 ) iStatus = 0;		// �ѹ��W�L��ɡA���`
			else if( ix == X_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
			else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = '@';}
			break;
		case 'a': // ����
			iy--;
			if( iy < 0 ) iStatus = 0; // �ѹ��W�L��ɡA���`
			else if( iy == 0 )  {iStatus = 2; cIcon = 'Q';}// ������ɤW
			else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';} 
			break;
		case 'd': // ���k
			iy++;
			if( iy >  Y_MAX + 1 ) iStatus = 0; // �ѹ��W�L��ɡA���`
			else if( iy == Y_MAX+1 ) {iStatus = 2; cIcon = 'Q';}// ������ɤW
			else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = '@';}
			break;
	}
	return(iStatus);	// �Ǧ^�ѹ������A
}
int main(void)
{
	char cIn;
	int iStatus = 1;// �w�]�ѹ��b���`���A
	CMouse mouseX;  // �ŧi mouseX �����ܼ�
	mouseX.Init();  // �]�w�ѹ�����l���A
	mouseX.Show();  // ���ѹ��ۤv�e�X�ۤv����m
	iStatus = mouseX.iStatus; // ���o�ѹ��ثe�����A
	while( iStatus != 0 ) { // �u�n�ѹ��٦b���`���A�N�~�����ϥΪ̿�J
		cIn = getch();
		iStatus = mouseX.Update(cIn);	// ���ѹ��ۤv��s���A
		if( iStatus ) mouseX.Show();	// �u�n�ѹ��S�����`�A�N������s�ѹ���m�����
		else cout << "�ѹ��w�g���`, �C������" << endl;
	}
	system("pause"); return(0);
}