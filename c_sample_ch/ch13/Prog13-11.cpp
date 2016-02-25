#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// 老鼠的編號
public:
	static int m_iCount; // 記錄總共產生幾隻老鼠
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // 每當有新的老鼠產生時,就加1
	~CMouse() { m_iCount--; } // 每當有老鼠被回收時,就減1
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1);	// 宣告一個物件, 設定其 Id 為 1
	CMouse mouse2[10];	// mouse2 為具有 10 個物件的陣列, Id 都使用預設值 0
	cout << CMouse::m_iCount << "隻老鼠被建立" << endl;
	system("pause"); return(0);
}