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
	struct StuInfo stu[3];
	int i; //stu �����ޭ�
	if( (pfile = fopen("StudentInfo.txt","w")) == NULL ) {  
		printf("StudentInfo.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	}
	for( i = 0 ; i < 3 ; i++ ) {
		printf("��J�Ǹ�: ");
		scanf("%d",&stu[i].iID );
		printf("��J�m�W: ");
		scanf("%s",stu[i].cName );
		printf("��J�X�ͤ��(YYMMDD): ");
		scanf("%s",stu[i].cBirthday );
	}
	for( i = 0 ; i < 3 ; i++ )
		fprintf(pfile,"%6d %9s %8s\n",stu[i].iID,stu[i].cName,stu[i].cBirthday);
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}