#include <iostream>
#include <conio.h>
#include "CGame.h"
extern void Show(CGame);
using namespace std;
bool g_bBoss = false; // ����ӤF
int  g_iCounter = 0;  // ��J�����䦸��
int main(void) {
	char cIn;
	CGame gx;
	while ( (cIn = getch()) != 'q' ) {
		if( cIn == 'b' ) g_bBoss = !g_bBoss;
		g_iCounter++;
		gx.Update();
		Show(gx); 
	}
	system("pause"); return(0);
}