#include <iostream>
#include "area.h"
#include "volume.h"
using namespace std;
int main(void) {
	float r, l;
	cout << "�п�J�b�|: " ; cin >> r;
	cout << "�п�J���: " ; cin >> l;
	cout << "�b�|�� " << r << " ����," << "���n�� " << CIRCLE(r) << endl;
	cout << "�b�|�� " << r << " ���y," << "��n�� " << SPHERE(r) << endl;
	cout << "����� " << l << " �������," << "���n�� " << SQUARE(l) << endl;
	cout << "����� " << l << " ���ߤ���," << "��n�� " << CUBIC(l) << endl;
	system("pause"); return(0);
}