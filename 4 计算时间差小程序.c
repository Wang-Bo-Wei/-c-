#include <stdio.h>  

int main()
{
	printf("在两行内分别输入两组时间的小时数和分钟数");
	int hour1,min1;
	int hour2,min2;
	
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	
	int t1 = hour1*60 + min1;
	int t2 = hour2*60 + min2;
	
	int t = t1-t2;
	printf("时间差为%d小时%d分钟",t/60,t%60);
	
	return 0;
}