#include <iostream>
#include <cstdlib>
using namespace std;
struct StudentInfo {
	char cName[20];
	int  iAge;
	void inputInfo() { // 負責輸入姓名與年齡的函式
		cout << "輸入姓名 : "; cin.getline(cName,18);
		cout << "輸入年齡 : "; cin >> iAge;
	}
	void print() { // 負責顯示姓名與年齡的函式
		cout << "姓名 : " << cName << " 年齡 : " << iAge << endl;
	}
};
int main(void)
{
	StudentInfo stu;	
	stu.inputInfo();
	stu.print();
	system("pause");return(0);
}