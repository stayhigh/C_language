#include <iostream>
using namespace std;
#define MAX_SIZE 10
int main(void) {
	int n;
#ifdef MAX_SIZE
	int iX[MAX_SIZE];
	n = MAX_SIZE;
#else
	int *iX;
	cout << "�п�J�إߪ��}�C�j�p" << endl;
	cin >> n;
	iX = new int[n];
#endif
	cout << "�}�C iX �@�� " << n << " �Ӥ���" << endl;
	system("pause"); return(0);
}