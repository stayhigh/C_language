#include <iostream>
#include <cstdlib>
using namespace std;
char *getString(char *cText) { // ���ǤJ���r����o�Ŷ��A�öǦ^
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
	delete [] pch;  // ������o���Ŷ�
	system("pause"); return(0);
}