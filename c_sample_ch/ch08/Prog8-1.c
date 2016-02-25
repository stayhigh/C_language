#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=1, *ptr;
	ptr = &a;
	printf("變數   a 的左值: %p, 右值: %d\n",&a, a);
	printf("變數 ptr 的左值: %p, 右值: %p\n",&ptr, ptr);
	printf("被 ptr 所指向變數的內容: %d\n",*ptr);
	system("pause"); return(0);
}