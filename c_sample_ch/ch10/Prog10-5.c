#include <stdio.h>
#include <stdlib.h>
struct StuInfo {
	int	 iID;
	char cName[10];
	char cBirthday[10];
};
int main(void)
{
	FILE *pfile;	
	struct StuInfo stu[5];
	int iNum, i = 0; //stu �����ޭ�
	if( (pfile = fopen("stuinfo.txt","r")) == NULL ) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("stuinfo.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	}
	while(!feof(pfile) ) {	// �P�_�O�_Ū���ɮק�
		fscanf(pfile,"%d %s %s",&stu[i].iID,stu[i].cName,stu[i].cBirthday);
		i++;
	}
	iNum = i; printf("�Ǹ�   �m�W    �ͤ�\n");
	for( i = 0 ; i < iNum ; i++ )
		printf("%d %s %s\n",stu[i].iID,stu[i].cName,stu[i].cBirthday);
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}