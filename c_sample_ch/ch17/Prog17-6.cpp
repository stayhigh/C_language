#include <iostream>
using namespace std;
#define MAX_SIZE 10
#ifndef MAX_SIZE	// MAX_SIZE �S���w�q��, �i�}�H�U���{���϶�
	#define  MAX_SIZE 10
#endif
int main(void) {
	int n;
	int iX[MAX_SIZE];
	n = MAX_SIZE;
	cout << "�}�C iX �@�� " << n << " �Ӥ���" << endl;
	system("pause"); return(0);
}