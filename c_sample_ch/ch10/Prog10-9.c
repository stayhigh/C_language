#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile; // �ŧi���V�ɮת����c����
	char cStr[20] = "long long ago";  // �s��g�X���r��
	int i, len;
	if( (pfile = fopen("out.txt","w")) == NULL ) {  
		printf("out.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	}
	fputs(cStr,pfile);	// �g�X�r�� cStr �����e
	fputc('\n',pfile);  // �g�J����r��,�ϥ� putc ��i
	len = strlen(cStr); // �p��r�ꪺ����
	for( i = 0 ; i < len ; i++ ) {
		fputc(cStr[i],pfile); fputc('\n',pfile); // �g�@�Ӧr�����@��
	}
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}