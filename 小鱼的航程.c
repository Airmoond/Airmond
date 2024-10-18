#include <stdio.h>

int main()
{
	int day[7]={1,1,1,1,1,0,0};//用数组解决，将工作日标为1，周末标为0 
	int x,n,i,dayswim=0;
	scanf("%d %d",&x,&n);
	int weekday=x;//用weekday表示周几 
	for(i=1;i<=n;i++){
		
		if(day[weekday-1]==1){//如果这一天是工作日，则在游泳日（dayswim）上加一，计算总共有多少天需要游泳 
			dayswim++;
		}
		weekday++;
		if(weekday>7){//如果 weekday大于7，将其置换回到周一
			weekday=weekday-7;
		}
	}
	printf("%d",dayswim*250);
	
	
	
	return 0;
}
