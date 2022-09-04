/* 求两个整数中的较大数 */
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	scanf_s("%d %d",&a, &b);
	if (a > b){
		printf("较大数为：%d", a);
	}
	else{
		printf("较大数为：%d", b);
	}
	return 0;
}