#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=1, *ptr;
	ptr = &a;
	printf("�ܼ�   a ������: %p, �k��: %d\n",&a, a);
	printf("�ܼ� ptr ������: %p, �k��: %p\n",&ptr, ptr);
	printf("�Q ptr �ҫ��V�ܼƪ����e: %d\n",*ptr);
	system("pause"); return(0);
}