#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
int main(void)
{
	int ifin, ifout;
	char cBuf[30];
	int  iLen;
	ifin  = open("story.txt", O_RDONLY);
	ifout = open("unstory.txt", O_CREAT | O_WRONLY, S_IWRITE);
	if( ifin == -1 || ifout == -1 )  {
		printf("�ɮ׶}�ҥ���"); system("pause"); return(0); 
	} 
	while( !eof(ifin) ) {
		iLen = read(ifin, cBuf, 16); // �@���̦hŪ�� 16 �Ӧ줸��
		write(ifout, cBuf, iLen);
		cBuf[iLen] = '\0'; // �]�w���r���X
		printf("Ū��%2d Bytes.���e:%s\n",iLen,cBuf);
	}
	close(ifin); close(ifout); system("pause"); return(0); // �����ɮ�
}