#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *); // �洫��Ӥ޼ƪ����e
void swap(int *x,int *y)
{
	int temp;
	temp=*x; *x=*y; *y=temp; // ���P�� temp = a; a = b; b = temp;
	printf("In swap...\n");
	printf("x=%d,y=%d\n",*x,*y);  /* ��X�b�禡����*/
	printf("x ���k��: %p, y ���k��: %p\n",x,y);
	printf("x ������: %p, y ������: %p\n",&x,&y);
}
int main()
{
	int a=5,b=10;
	printf("In main... Before Swap\n");
	printf("a=%d,b=%d\n",a,b); printf("a ����}: %p, b ����}: %p\n",&a,&b);
	swap(&a,&b);  // �H�ǫ��Ъ��覡�ǻ� a, b ����}
	printf("In main... After Swap\n");
	printf("a=%d,b=%d\n",a,b); printf("a ����}: %p, b ����}: %p\n",&a,&b);
	system("pause"); return(0);
}