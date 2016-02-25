#include <iostream>
#include <iomanip>
using namespace std;
class CBasis {
protected:
	int bp;
	void Bpf() { bp = 1; bu = 10; };
public:
	int bu;
	void Buf() { bp = 2; bu = 20; };
};
class CDerived : public CBasis {
private:
	int dp;
	void Dpf() { bu = 10; };
public:
	int du;
	void Duf() {
		bp = 2; bu = 20;
	};
};
int main(void) {
	CBasis   b1;
	CDerived d1;
//	b1.bp = 1;	// 這行會產生編譯上的錯誤
	d1.Duf();
	system("pause"); return(0);
}