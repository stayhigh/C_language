#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define X_MAX 10 // �w�q�i���ʪ��d��
#define Y_MAX 10 // �w�q�i���ʪ��d��
class CMouse {
private:
	int ix, iy;		// �ѹ����_�l��m
	int iStatus;	
	char cIcon;		
	char cMIcon[2]; //�x�s��ؤ��P���ϥ�
public:
	void Init();
	void Show();
	void SetPos(int x, int y) {	ix = x; iy = y; }
	void SetIcon(char cN, char cB) { cIcon = cMIcon[0] = cN; cMIcon[1] = cB;}
	int  Update(char cIn);
	friend int GetStatus(CMouse mouseT){return(mouseT.iStatus);}
};
void CMouse::Init() {
	ix = 1, iy =1; // �ѹ����_�l��m
	iStatus = 1;   // 1 : ���`���A, 2: ���}��� 0: ���`���A
	cIcon = cMIcon[0] = '@'; cMIcon[1] = 'Q';
}
void CMouse::Show() {
	system("cls"); // �M���ù��W�����
	for( int i = 1 ; i <= ix ; i++ ) cout << endl;
	cout << setw(iy+1) << setfill(' ') << cIcon << endl;
}
int  CMouse::Update(char cIn)
{
		switch(cIn) {
			case 'w': // ���W�A���ѹ���m�A�îھڷs����m�A��s�ѹ������A
				ix--;
				if( ix < 0 ) iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( ix == 0 ) {iStatus = 2; cIcon = cMIcon[1];}// ������ɤW
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = cMIcon[0];}
				break;
			case 's': // ���U
				ix++;
				if( ix > X_MAX + 1 ) iStatus = 0;		// �ѹ��W�L��ɡA���`
				else if( ix == X_MAX+1 ) {iStatus = 2; cIcon = cMIcon[1];}// ������ɤW
				else if( iy >= 1 && iy <= Y_MAX ) {iStatus = 1; cIcon = cMIcon[0];}
				break;
			case 'a': // ����
				iy--;
				if( iy < 0 ) iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( iy == 0 )  {iStatus = 2; cIcon = cMIcon[1];}// ������ɤW
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = cMIcon[0];} 
				break;
			case 'd': // ���k
				iy++;
				if( iy >  Y_MAX + 1 ) iStatus = 0; // �ѹ��W�L��ɡA���`
				else if( iy == Y_MAX+1 ) {iStatus = 2; cIcon = cMIcon[1];}// ������ɤW
				else if( ix >= 1 && ix <= X_MAX ) {iStatus = 1; cIcon = cMIcon[0];}
				break;
		}
	return(iStatus);	// �Ǧ^�ѹ������A
}
int main(void) {
	char cIn;
	int iStatus;
	CMouse mouseX;
	mouseX.Init();
	mouseX.Show(); // ���ѹ��ۤv�e�X�ۤv����m
	iStatus = GetStatus(mouseX); // �N�����ܼƶǤJ�ͽ˨禡��
	while( iStatus != 0 ) { // �u�n�ѹ��٦b���`���A�N�~�����ϥΪ̿�J
		cIn = getch();
		iStatus = mouseX.Update(cIn); // ���ѹ��ۤv��s���A
		if( iStatus ) mouseX.Show(); // �u�n�ѹ��S�����`�A�N������s�ѹ���m�����
		else cout << "�ѹ��w�g���`,�C������" << endl;
	}
	system("pause"); return(0);
}