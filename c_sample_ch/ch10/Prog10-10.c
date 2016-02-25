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
	int i; //stu 的索引值
	if( (pfile = fopen("StudentInfo.txt","w")) == NULL ) {  
		printf("StudentInfo.txt 檔案無法開啟");
		system("pause"); return(0); 
	}
	for( i = 0 ; i < 3 ; i++ ) {
		printf("輸入學號: ");
		scanf("%d",&stu[i].iID );
		printf("輸入姓名: ");
		scanf("%s",stu[i].cName );
		printf("輸入出生日期(YYMMDD): ");
		scanf("%s",stu[i].cBirthday );
	}
	for( i = 0 ; i < 3 ; i++ )
		fprintf(pfile,"%6d %9s %8s\n",stu[i].iID,stu[i].cName,stu[i].cBirthday);
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}