#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class CSticker {
private:
	int  m_iy;	// 圖示的位置
	char m_cIcon;		
public:
	CSticker() {	
		m_iy = rand()%20; // 圖示的位置,以亂數產生
		m_cIcon = '@';	  // 顯示的圖示
	}
	void Show() { cout << setw(m_iy+1) << setfill(' ') << m_cIcon << endl; }
};
class CPainter {
private:
	CSticker *pSticker; // 指標變數
public:
	CPainter()  { pSticker = new CSticker[10]; }
	~CPainter() { delete [] pSticker; }
	void Show() {
		for(int i = 0 ; i < 10 ; i++ ) (pSticker+i)->Show(); // 呼叫 Show 函式
	}
};
int main(void) {
	srand( (unsigned)time( NULL ) ); // 設定亂數產生器的初始值
	CPainter pic;
	pic.Show();
	system("pause"); return(0);
}