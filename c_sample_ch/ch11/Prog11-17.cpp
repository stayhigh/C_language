#include <iostream>
#include <cstdlib>
using namespace std;
struct StudentInfo {
	char cName[20];
	int  iAge;
	void inputInfo() { // �t�d��J�m�W�P�~�֪��禡
		cout << "��J�m�W : "; cin.getline(cName,18);
		cout << "��J�~�� : "; cin >> iAge;
	}
	void print() { // �t�d��ܩm�W�P�~�֪��禡
		cout << "�m�W : " << cName << " �~�� : " << iAge << endl;
	}
};
int main(void)
{
	StudentInfo stu;	
	stu.inputInfo();
	stu.print();
	system("pause");return(0);
}