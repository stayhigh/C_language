#include <iostream>
#include <cstdlib>
#include <memory.h>
#define STRING "new & delete"
using namespace std;
int main(void)
{
	int *pix;  pix = new int;	// ���o 1 ���x�s int ���Ŷ�
	char *pcs; pcs = new char[15];	// ���o 15 ���x�s char ���Ŷ�
	*pix = sizeof(STRING);	// �N�̫᪺ null character ��i�h
	memcpy(pcs, STRING, *pix);	// �ƻs���e�� pcs ��
	cout << "sizeof(\""<< pcs << "\") = " << *pix-1 << endl;
	delete pix; delete [] pcs;  // ������o���Ŷ�
	system("pause"); return(0);
}