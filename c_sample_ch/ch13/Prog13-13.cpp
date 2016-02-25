#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// 老鼠的編號
	static int m_iCount; // 記錄總共產生幾隻老鼠
public:
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // 新的物件產生就加1
	~CMouse() { m_iCount--; } // 每當有老鼠被回收時,就減1
	static void Show() { cout << m_iCount << "隻老鼠被建立" << endl;
//		ShowId();
	}
	void ShowId() { cout << m_iId << endl; }
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1); 
	CMouse::Show();	// 從類別呼叫靜態成員函式
	CMouse mouse2[10];
	mouse1.Show();	// 從物件變數呼叫靜態成員函式
	system("pause"); return(0);
}