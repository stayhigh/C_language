#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>
int main(void)
{
	char cStr[20] = "�L�w�İϪ��ɮצs��";
	char cBuf[80]; // �Ω�Ū�����
	int ifd, ilen;
	ifd = open("unbuffer.txt", O_CREAT | O_RDWR , S_IWRITE ); //�iŪ�g�覡�}��
	if( ifd == -1 ) {
		printf("unbuffer.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	} //�إ� unbuffer.txt
	write(ifd, cStr, strlen(cStr)); //�N cStr �g�J�ɮ�
	lseek(ifd, 0, SEEK_SET);		// �NŪ�g�Y���ʨ��ɮ��Y
	ilen = read(ifd, cBuf, 79); cBuf[ilen] = '\0'; //Ū���ɮ�
	printf("Ū�������e: %s\n",cBuf);
	close(ifd); system("pause"); return(0); // �����ɮ�
}