#include <iostream>
#include <conio.h>
#include "CMouse.h"
using namespace std;
int main(void) {
	char cIn;
	int iStatus, ix, iy;
	CMouse mouse1, mouse2; // �إ� mouse1 �P mouse2
	mouse1.Show(); // ���ѹ�1 �e�X�ۤv����m
	mouse1.GetPos(&ix, &iy); // ���o�ѹ�1 ����m
	mouse2.SetTrcPos(ix,iy); // �]�w���ѹ�2,�������H
	mouse2.SetTracer(true);  // �]�w�ѹ�2 ���l�H��
	mouse2.Show();			 // ���ѹ�2 �e�X�ۤv
	iStatus = mouse1.GetStatus();
	while( iStatus != 0 ) { 
		cIn = getch();
		iStatus = mouse1.Update(cIn); // ���ѹ��ۤv��s���A
		if( iStatus ) {// �ѹ�1�S�����`, ������T�]�w���ѹ�2
			mouse1.Show(); 
			mouse1.GetPos(&ix, &iy); // ���o�ѹ�1 ����m
			mouse2.SetTrcPos(ix,iy); // �]�w���ѹ�2, �������H
			mouse2.Show(); 
		}
		else cout << "�ѹ��w�g���`,�C������" << endl;
	}
	system("pause"); return(0);
}