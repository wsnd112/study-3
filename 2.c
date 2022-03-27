//用do…while循环按公式e=1+1/1!+1/2!+1/3!+…+1/n!计算 e 的值(精度为 1e-6)
#include <stdio.h>
double ad(int n)
{
	double sum=1;
	while(n)
	{
		sum*=n;
		n--;
	}
	return 1/sum;
}
int main()
{
	/********** Begin **********/
	int i = 11;
	double sum = 1;
	double a;
	do
	{
		a=ad(i);
		sum+=a;
		i--;
	}while(i);
	printf("i=11\n");
	printf("e=%lf",sum);
	/********** End **********/
	return 0;
}