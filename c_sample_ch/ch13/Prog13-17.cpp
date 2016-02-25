#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i;
	try {
		for( i = 1; i <= 10 ; i++ ) {
			if( i == 6 )  throw "i = 6 發生了!!!";
		}
	}
	catch(const char *MsgStr) {
		cout << MsgStr << "例外產生了" << endl;
	}
	system("pause"); return(0);
}