#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int cust,nc;
bool barber,chair[10];
main(){
	printf("\nEnter number of customers:");
	scanf("%d",&cust);
	printf("Enter number of chairs[MAX : 10]:");
	scanf("%d",&nc);
	if(nc>=11){
		printf("No more than 10 please");
		sleep(2);
		system("cls");
		main();
	}
	if(barber==false){
		printf("Customer 1 wakes up barber");
		barber=true;
		for(int i=1;i<=nc;i++){
			sleep(2);			
			printf("\nCustomer %d sits on chair %d",i,i);
			chair[nc]=true;	
		}
		cust=cust-nc;
		for(cust;cust>=1;cust--){
			sleep(2);
			printf("\nCustomer %d Left...",cust+nc);
		}
		for(int i=1;i<=nc;i++){
			sleep(2);
			printf("\nCustomer %d Done",i);
			chair[nc]=false;
		}
		barber=false;
		sleep(2);		
		printf("\nBarber Sleeps");			
	}
	
}
