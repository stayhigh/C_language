#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void showChar(char ch, int s=1, int e=16) 
{
	if( s > 1 ) cout << setw(s-1) << setfill(' ') << ' ';
	cout << setw(e-s+1) << setfill(ch) << ch << endl;
}
int main(void)
{
	showChar('#');
	showChar('!',2);
	for( int i = 3 ; i <= 8 ; i++ ) showChar('*', i, 16-i);
	system("pause"); return(0);
}