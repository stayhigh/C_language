#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double	da;
	float	fb;
	int		i, iArray[3];
	FILE	*pfile;
	if((pfile=fopen("number.bin","rb"))==NULL) { 
		printf("number.bin �ɮ׵L�k�}��"); system("pause"); return(0); 
	} //�}�ҤG�i����
	fread(&da,sizeof(double),1,pfile);  // Ū���ܼ� da �����e
	fread(&fb,sizeof(float) ,1,pfile); // Ū���ܼ� fb �����e  
	fread(iArray,sizeof(int),3,pfile); // Ū�� iArray �����e
	printf("da = %6.5f\n",da);
	printf("fb = %6.5f\n",fb);
	for(i = 0; i < 3; i++) printf("iArray[%d]=%d\n",i,iArray[i]);
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}