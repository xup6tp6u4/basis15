#include<stdio.h>     
#include<stdlib.h>
void isLate(int,int); 
int main(void){      
	int hour,min;          
	printf("�п�J�ɶ�");
	scanf("%02d %02d",&hour,&min);
	isLate(hour,min);
}
void isLate(int hour,int min){
	if(hour>=7&&hour<17){
		if(hour==7&&min>=30){    
			printf("�{�b�O�W�Үɶ�");
			printf("�ɶ�%02d:%02d",hour,min);
		}
		else if(hour>7){        
			printf("�{�b�O�W�Үɶ�");
			printf("�ɶ�%02d:%02d",hour,min);
		} 
		
	}
	else{
		printf("�U��");
	}
	
}
