#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
public:
	CMouse() { // �غc��
		ix = 1; iy = 1;
		cout << "CMouse �غc���Q�I�s" << endl;
	}
	~CMouse();
private:
	int ix, iy;		// �ѹ����_�l��m
};
CMouse::~CMouse() {
	cout << "~CMouse �Ѻc���Q�I�s" << endl;
	system("pause");
}
void TestFunc() {
	cout << "mouse2 �����ܼƫإ߫e" << endl;
	CMouse mouse2;
	cout << "mouse2 �����ܼƫإ߫�" << endl;
}
int main(void) {
	TestFunc();
	cout << "mouse1 �����ܼƫإ߫e" << endl;
	CMouse mouse1;
	cout << "mouse1 �����ܼƫإ߫�" << endl;
	TestFunc();
	return(0);
}