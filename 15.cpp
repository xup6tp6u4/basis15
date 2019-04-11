#include<stdio.h>     
#include<stdlib.h>
void isLate(int,int); 
int main(void){      
	int hour,min;          
	printf("請輸入時間");
	scanf("%02d %02d",&hour,&min);
	isLate(hour,min);
}
void isLate(int hour,int min){
	if(hour>=7&&hour<17){
		if(hour==7&&min>=30){    
			printf("現在是上課時間");
			printf("時間%02d:%02d",hour,min);
		}
		else if(hour>7){        
			printf("現在是上課時間");
			printf("時間%02d:%02d",hour,min);
		} 
		
	}
	else{
		printf("下課");
	}
	
}
