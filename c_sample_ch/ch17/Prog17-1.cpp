#include <iostream>
#include <conio.h>
#include "CMouse.h"
using namespace std;
int main(void) {
	char cIn;
	int iStatus, ix, iy;
	CMouse mouse1, mouse2; // 建立 mouse1 與 mouse2
	mouse1.Show(); // 讓老鼠1 畫出自己的位置
	mouse1.GetPos(&ix, &iy); // 取得老鼠1 的位置
	mouse2.SetTrcPos(ix,iy); // 設定給老鼠2,讓它跟隨
	mouse2.SetTracer(true);  // 設定老鼠2 為追隨者
	mouse2.Show();			 // 讓老鼠2 畫出自己
	iStatus = mouse1.GetStatus();
	while( iStatus != 0 ) { 
		cIn = getch();
		iStatus = mouse1.Update(cIn); // 讓老鼠自己更新狀態
		if( iStatus ) {// 老鼠1沒有死亡, 相關資訊設定給老鼠2
			mouse1.Show(); 
			mouse1.GetPos(&ix, &iy); // 取得老鼠1 的位置
			mouse2.SetTrcPos(ix,iy); // 設定給老鼠2, 讓它跟隨
			mouse2.Show(); 
		}
		else cout << "老鼠已經死亡,遊戲結束" << endl;
	}
	system("pause"); return(0);
}