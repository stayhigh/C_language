#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i;
	try {
		for( i = 1; i <= 10 ; i++ ) {
			if( i == 6 )  throw "i = 6 �o�ͤF!!!";
		}
	}
	catch(const char *MsgStr) {
		cout << MsgStr << "�ҥ~���ͤF" << endl;
	}
	system("pause"); return(0);
}