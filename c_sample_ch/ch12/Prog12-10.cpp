#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
public:
	CMouse(); // �P���O�W�٬ۦP���N�O�غc��
private:
	int ix, iy;		// �ѹ����_�l��m
};
CMouse::CMouse() {
	ix = 1; iy = 1;
	cout << "ix = " << ix << ", iy = " << iy << endl;
}
int main(void) {
	cout << "mouseX �����ܼƫإ߫e" << endl;
	CMouse mouseX;
	cout << "mouseX �����ܼƫإ߫�" << endl;
	system("pause"); return(0);
}