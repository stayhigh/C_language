#include <iostream>
#include <cstdlib>
using namespace std;
char *getString(char *cText) { // 為傳入的字串取得空間，並傳回
	char *pch;
	pch = new char[strlen(cText)+1];
	strcpy(pch,cText);
	return pch;
}
int main(void)
{
	char *pch;
	pch = getString("new & delete");
	cout << "pch = " << pch << endl;
	delete [] pch;  // 釋放取得的空間
	system("pause"); return(0);
}