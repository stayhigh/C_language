#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i;
	try {
		while( 1 ) {
			cin >> i;
			if( i > 6 ) throw "��J�W�L  6 �o�ͤF!";
			else if( i == 5 ) throw i;
		}
	}
	catch(const char *MsgStr) {
		cout << MsgStr << "�ҥ~���ͤF" << endl;
	}
	catch(const int i) {
		cout << i << "���ҥ~���ͤF" << endl;
	}
	system("pause"); return(0);
}