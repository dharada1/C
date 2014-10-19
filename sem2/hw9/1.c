#include <stdio.h>
#include "mytime.h"

int main(){

/*time1,time2は同日中として計算する*/

	time time1,time2,timegap;

	printf("Input time1 >\n");
	do{
	scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.seconds);
	if ((time1.hours < 0 || time1.hours >= 24 || time1.minutes < 0 || time1.minutes >= 60 || time1.seconds < 0 || time1.seconds >= 60)){
		printf("Error: %d %d %d is invalid.\n",time1.hours,time1.minutes,time1.seconds);
	}
	}while((time1.hours < 0 || time1.hours >= 24 || time1.minutes < 0 || time1.minutes >= 60 || time1.seconds < 0 || time1.seconds >= 60));

	printf("Input time2 >\n");
	do{
	scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.seconds);
	if ((time2.hours < 0 || time2.hours >= 24 || time2.minutes < 0 || time2.minutes >= 60 || time2.seconds < 0 || time2.seconds >= 60)){
		printf("Error: %d %d %d is invalid.\n",time2.hours,time2.minutes,time2.seconds);
	}
	}while((time2.hours < 0 || time2.hours >= 24 || time2.minutes < 0 || time2.minutes >= 60 || time2.seconds < 0 || time2.seconds >= 60));

	int time1inseconds=0, time2inseconds=0, timegapinseconds=0;

	time1inseconds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
	time2inseconds = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;

	if(time1inseconds - time2inseconds >= 0){
		timegapinseconds = time1inseconds - time2inseconds;
		timegap.hours = timegapinseconds / 3600;
		timegapinseconds = timegapinseconds % 3600;
		timegap.minutes = timegapinseconds / 60;
		timegapinseconds = timegapinseconds % 60;
		timegap.seconds = timegapinseconds;
	}
	else{
		timegapinseconds = time2inseconds - time1inseconds;
		timegap.hours = timegapinseconds / 3600;
		timegapinseconds = timegapinseconds % 3600;
		timegap.minutes = timegapinseconds / 60;
		timegapinseconds = timegapinseconds % 60;
		timegap.seconds = timegapinseconds;
	}

	printf("Time gap: %d %d %d\n",timegap.hours,timegap.minutes,timegap.seconds);

	return 0;
}