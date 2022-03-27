//用do…while循环实现输入一批整数统计正负数个数
#include <stdio.h>
int main()
{
	int num,zsum=0,fsum=0;
	//循环输入与求和
	/********** Begin **********/
	do
	{
		scanf("%d",&num);
		if(num>0)
		{
			zsum++;
		}
		else if(num<0)
		{
			fsum++;
		}
		else
		;
	}while(num);
	printf("正数个数为%d\n",zsum);
	printf("负数个数为%d\n",fsum);
    /********** End **********/
	return 0;
}