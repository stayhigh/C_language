#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415;
	int		iArray[] = {3,5,7};
	FILE	*pfile;
	if((pfile=fopen("number.bin","wb"))==NULL) { 
		printf("number.bin �ɮ׵L�k�}��");
		system("pause"); return(0); 
	} //�}�ҤG�i����
	fwrite(&da,sizeof(double),1,pfile); // �g�J�ܼ� da �b�O���餤���x�s���e
	fwrite(&fb,sizeof(float) ,1,pfile); // �g�J�ܼ� fb �b�O���餤���x�s���e  
	fwrite(iArray,sizeof(int),3,pfile); // �g�J�ܼ� iArray �b�O���餤���x�s���e
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}