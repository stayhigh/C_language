#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
public:
	CMouse() { // 篶じ
		ix = 1; iy = 1;
		cout << "CMouse 篶じ砆㊣" << endl;
	}
	~CMouse();
private:
	int ix, iy;		// ρ公癬﹍竚
};
CMouse::~CMouse() {
	cout << "~CMouse 秆篶じ砆㊣" << endl;
	system("pause");
}
void TestFunc() {
	cout << "mouse2 ン跑计ミ玡" << endl;
	CMouse mouse2;
	cout << "mouse2 ン跑计ミ" << endl;
}
int main(void) {
	TestFunc();
	cout << "mouse1 ン跑计ミ玡" << endl;
	CMouse mouse1;
	cout << "mouse1 ン跑计ミ" << endl;
	TestFunc();
	return(0);
}