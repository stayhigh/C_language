#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char str1[9] = "apple";
	char str2[9] = "Apple";
	char str3[9] = "banana";
	printf("%s VS %s = %d\n",str1,str1,strcmp(str1,str1));
	printf("%s VS %s = %d\n",str1,str2,strcmp(str1,str2));
	printf("%s VS %s = %d\n",str1,str3,strcmp(str1,str3));
	system("pause");
	return(0);
}