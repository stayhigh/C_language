#include <iostream>
#include <iomanip>
using namespace std;
class CBasis {
private:
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
	CDerived dx;
	dx.Duf();
	system("pause"); return(0);
}