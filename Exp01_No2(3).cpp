/* �����������еĽϴ��� */
#include<stdio.h>
int main()
{
	int a, b;
	printf("����������������\n");
	scanf_s("%d %d",&a, &b);
	if (a > b){
		printf("�ϴ���Ϊ��%d", a);
	}
	else{
		printf("�ϴ���Ϊ��%d", b);
	}
	return 0;
}