#include <stdio.h>
#include <stdlib.h>
int main()
{
	char String[10] = "Dragon"; //�@���r���}�C
	char *pString = "Dragon";	//�r�������ܼ�
	char cWord[4][10] = {"Apple","Orange","Banana","Melon"}; //�G���}�C
	char *pcWord[4] = {"Apple","Orange","Banana","Melon"}; //�@���r�����а}�C
	int i;
	printf("sizeof:%2d strlen:%2d %s\n",sizeof(cWord[0]),
			 strlen(cWord[0]),cWord[0]);
	printf("�_�l��}�w cWord: %p  pcWord: %p\n",cWord, pcWord[0]);
	String[0] = 'X'; cWord[0][0] = 'X'; // ���r�ꤺ���Ĥ@�Ӧr��
//	pString[0] = 'X'; pcWord[0][0] = 'X';
	system("pause"); return(0);
}