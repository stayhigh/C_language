#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	fstream outfile, infile;	// �ŧi�@�ӥi�H�s���ɮת�����
	char ch;
	infile.open("story.txt",ios::in);
	outfile.open("copy.txt",ios::out);
	if( !infile.is_open() || !outfile.is_open() ) { // �ɮ׶}�ҥ��Ѯ�, �����פ���ɮת��s��
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	while( !infile.eof() ) {
		if( (ch = infile.get()) !=  EOF )  {	// Ū���@�Ӧr��
			outfile.put(ch);			// �g�X�@�Ӧr��
		}
		cout << ch;		// ���Ū�������e
	}
	outfile.close(); // �����ɮ� 
	infile.close();
	system("pause"); return(0);
}