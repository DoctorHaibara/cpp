#include <stdio.h>

typedef struct time{
	int hour,minute,second;
	char period[2];
	//amÎª0 pmÎª1 
}Time;

int main(){
	int hour,minute,second,n;
	char period[2];
	Time time1;
	scanf("%d %d %d %char %n",&time1.hour,&time1.minute,&time1.second,period,n);
	int carry=0;
	carry=(time1.second+n)/60;
	time1.second=(time1.second+n)%60;
	carry=(time1.minute+carry)/60;
	time1.minute=(time1.minute+n)%60;
	carry=(time1.hour+carry)/12;
	time1.hour=(time1.hour+carry)%12;
	if(carry=1){
		if(time1.period=="am") time1.period="pm";
		else time1.period="am"; 
	}
	printf("%d %d %d %s",time1.hour,time1.minute£¬time1.second,time1.period);
	return 0;
}
