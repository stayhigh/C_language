#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	char buf[80];
	fstream fileobj;	// �ŧi�@�ӥi�H�s���ɮת�����
	fileobj.open("message.txt",ios::in);
	if( !fileobj.is_open() ) { // �ɮ׶}�ҥ���
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	while( !fileobj.eof() ) {
		fileobj.getline(buf, 80);
		cout << buf << endl;	// ���Ū�������e
	}
	fileobj.close(); // �����ɮ� 
	fileobj.clear(); // �M���ɮת����A
	fileobj.open("copy.txt",ios::out);	// �A���}���ɮ�
	if( !fileobj.is_open() ) { // �ɮ׶}�ҥ���
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	fileobj << buf;
	fileobj.close(); // �����ɮ� 
	system("pause"); return(0);
}