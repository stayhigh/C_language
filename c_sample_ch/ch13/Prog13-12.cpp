#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iId;	// 老鼠的編號
	static int m_iCount; // 記錄總共產生幾隻老鼠
public:
	CMouse(int id=0)  { m_iId = id; m_iCount++; } // 每當有新的老鼠產生時,就加1
	~CMouse() { m_iCount--; } // 每當有老鼠被回收時,就減1
	void Show() { cout << m_iCount << "隻老鼠被建立" << endl; }
};
int CMouse::m_iCount = 0;
int main(void)
{
	CMouse mouse1(1); 
	CMouse mouse2[10];
	CMouse mouse3 = mouse1;
	mouse1.Show();
	system("pause"); return(0);
}