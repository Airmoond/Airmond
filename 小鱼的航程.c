#include <stdio.h>

int main()
{
	int day[7]={1,1,1,1,1,0,0};//�����������������ձ�Ϊ1����ĩ��Ϊ0 
	int x,n,i,dayswim=0;
	scanf("%d %d",&x,&n);
	int weekday=x;//��weekday��ʾ�ܼ� 
	for(i=1;i<=n;i++){
		
		if(day[weekday-1]==1){//�����һ���ǹ����գ�������Ӿ�գ�dayswim���ϼ�һ�������ܹ��ж�������Ҫ��Ӿ 
			dayswim++;
		}
		weekday++;
		if(weekday>7){//��� weekday����7�������û��ص���һ
			weekday=weekday-7;
		}
	}
	printf("%d",dayswim*250);
	
	
	
	return 0;
}
