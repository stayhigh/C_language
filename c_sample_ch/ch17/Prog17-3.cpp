#include <iostream>
using namespace std;
namespace name1 {
	int iX = 1;
	void print_n1() { iX++; cout << iX << endl;}
}
namespace name2 {
	int iX = 5;
	void print_n2() { iX+=2; cout << iX << endl;}
}
int main(void) {
	int iX = 10;
	using namespace name1;  // �ϥ� name1 �Ŷ�
	cout << "iX = " << iX << endl;
	print_n1();  // �ŧi�b name1 �Ŷ����禡
	using namespace name2; // �ϥ� name2 �Ŷ�
	cout << "iX = " << iX << endl;
	print_n2();  // �ŧi�b name2 �Ŷ����禡
	system("pause"); return(0);
}