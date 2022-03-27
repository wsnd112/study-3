//用for循环求 s=1！+ 2！+ 3！+ …+n！的值
#include <stdio.h>
int ad(int a)
{
	int sum = 1;
	while (a)
	{
		sum *= a;
		a--;
	}
	return sum;
}
int main()
{
	int i = 1;
	int sum = 0;
	int a,n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = ad(i);
		printf("%d!=%d\n", i, a);
		sum += a;
	}
	printf("1!+2!+ …+%d!=%d", n, sum);
	return 0;
}