#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
public:
	CMouse(); // 與類別名稱相同的就是建構元
private:
	int ix, iy;		// 老鼠的起始位置
};
CMouse::CMouse() {
	ix = 1; iy = 1;
	cout << "ix = " << ix << ", iy = " << iy << endl;
}
int main(void) {
	cout << "mouseX 物件變數建立前" << endl;
	CMouse mouseX;
	cout << "mouseX 物件變數建立後" << endl;
	system("pause"); return(0);
}