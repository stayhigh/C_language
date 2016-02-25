#include <iostream>
#include <cstdlib>
using namespace std;
inline int iMax(int ix, int iy) { // «Å§i¬° inline
	return( ix > iy ? ix : iy);
}
int main(void)
{
	int a = 5, b = 3;
	cout << "max(a,b) = " << iMax(a,b) << endl;
	system("pause"); return(0);
}