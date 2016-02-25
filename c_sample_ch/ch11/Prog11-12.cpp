#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int ix = 2;
	int &rx = ix; // rx 為 ix 的參照
	cout << "rx = " << rx << endl;
	rx = 5;
	cout << "ix = " << ix << endl;
	cout << "ix 的儲存位址 : " << &ix << endl;	
	cout << "rx 的儲存位址 : " << &rx << endl;	
	system("pause"); return(0);
}