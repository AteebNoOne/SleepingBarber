#include<stdio.h>
#include <unistd.h>
int cust;
bool chair,wait,barber;

main(){
for(int i=0;i<=5;i++){	
	if(cust==0 && barber==false && chair==false && wait==false){
		printf("\nBarber is sleeping, chair is empty and waiting area is empty");
		cust=1;
		barber=false;
		chair=false;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==false && chair==false && wait==false){
		printf("\nCustomer enters... Barber is sleeping, chair is idle and waiting area is empty");	
		cust=1;
		barber=true;
		chair=false;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==true && chair==false && wait==false){
		printf("\nCustomer wakes up barber... Barber woke up, chair is idle and waiting area is empty");
		cust=1;
		barber=true;
		chair=true;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==true && chair==true && wait==false){
		printf("\nCustomer sits... Barber is cutting, chair is reserved and waiting area is empty");
		cust=2;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);
	}		
	else if(cust == 2 && barber==true && chair==true && wait==true){
		printf("\nNew Customer Enters and sits is waiting area... Barber is cutting, chair is reserved and waiting area is full");
		cust=3;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);			
	}	
	else if(cust == 3 && barber==true && chair==true && wait==true){
		printf("\nNew Customer enters... Barber is cutting, chair is reserved and waiting area is full \nCustomer leaves....");	
		cust=2;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);		
	}
}
}
