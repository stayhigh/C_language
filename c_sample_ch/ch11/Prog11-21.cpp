#include <iostream>
#include <cstdlib>
#include <fstream>	// ���J�w�q�ɮ׾ާ@�����Y��
using namespace std;
int main(void)
{
	char cBuf[80];
	ifstream infile;	// �ŧi�@�ӥi�HŪ���ɮת�����
	infile.open("myfirst.txt",ios::in);
	if( !infile.is_open() ) { // �ɮ׶}�ҥ���
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	infile >> cBuf; // �q�ɮת���Ū���ɮת����e�� cBuf
	cout << cBuf << endl;	// ���Ū�������e
	infile.close(); // �����ɮ� 
	system("pause"); return(0);
}