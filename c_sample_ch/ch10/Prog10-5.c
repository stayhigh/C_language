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
	int iNum, i = 0; //stu 的索引值
	if( (pfile = fopen("stuinfo.txt","r")) == NULL ) {  // 判斷檔案是否開啟失敗
		printf("stuinfo.txt 檔案無法開啟"); system("pause"); return(0); 
	}
	while(!feof(pfile) ) {	// 判斷是否讀到檔案尾
		fscanf(pfile,"%d %s %s",&stu[i].iID,stu[i].cName,stu[i].cBirthday);
		i++;
	}
	iNum = i; printf("學號   姓名    生日\n");
	for( i = 0 ; i < iNum ; i++ )
		printf("%d %s %s\n",stu[i].iID,stu[i].cName,stu[i].cBirthday);
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}