/* 求两个整数的和 */
#include<stdio.h>
int main(){
	int a, b, sum;
	printf("请输入两个整数：\n");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("两数和为：%d", sum);
	return 0;
}
