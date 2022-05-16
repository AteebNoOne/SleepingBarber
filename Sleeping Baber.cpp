#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <unistd.h>

bool barber;
bool chair;
bool wait;
int cust,cnt,cnt2;
char choice;

main(){
	printf("Customers= %d",cust);
	if(barber==true){
		printf("\tBarber= Awake");
	}
	else{
		printf("\tBarber= Sleeping");
	}
	if(chair==true){
		printf("\tChair= Reserved");
	}
	else{
		printf("\tChair= Idle");
	}
	if(wait==true){
		printf("\tWaiting area= Full");
	}
	else{
		printf("\tWaiting area= Empty");
	}		
	if(cust==0 && barber==false && chair==false && wait==false){
		printf("\nBarber is sleeping, chair is empty and waiting area is empty");
	}
	else if(cust == 1 && barber==false && chair==false && wait==false){
		printf("\nCustomer enters... Barber is sleeping, chair is idle and waiting area is empty");	
	}
	else if(cust == 1 && barber==true && chair==false && wait==false){
		printf("\nCustomer wakes up barber... Barber woke up, chair is idle and waiting area is empty");	
	}
	else if(cust == 1 && barber==true && chair==true && wait==false){
		printf("\nCustomer sits... Barber is cutting, chair is reserved and waiting area is empty");	
	}		
	else if(cust == 2 && barber==true && chair==true && wait==false){
		printf("\nNew Customer enters... Barber is cutting, chair is reserved and waiting area is empty");	
	}
	else if(cust == 2 && barber==true && chair==true && wait==true){
		printf("\nNew Customer sits is waiting area... Barber is cutting, chair is reserved and waiting area is full");	
	}	
	else if(cust == 3 && barber==true && chair==true && wait==true){
		printf("\nNew Customer enters... Barber is cutting, chair is reserved and waiting area is full \nCustomer leaves....");	
	}	
	if(cnt ==0 && cust== 1 && barber==true){
		printf("\nPress S to sit...");
		choice=getche();
		switch(choice){
		case 's':
			chair=true;
			cnt =1;
			system("cls");
			main();
			break;			
		case 'S':
			chair=true;
			cnt=1;
			system("cls");
			main();
			break;	
			
		default:
		printf("\nWRONG CHOICE! WAIT AND READ CAREFULLY!!!....");
		sleep(5);
		system("cls");
		main();				
		}
	}
	
	if(cnt2 ==0 && cust== 2 && barber==true){
		printf("\nPress S to sit in waiting area...");
		choice=getche();
		switch(choice){
		case 's':
			wait=true;
			cnt2=1;
			system("cls");
			main();
			break;			
		case 'S':
			wait=true;
			cnt2=1;
			system("cls");
			main();
			break;	
			
		default:
		printf("\nWRONG CHOICE! WAIT AND READ CAREFULLY!!!....");
		sleep(5);
		system("cls");
		main();				
		}
	}
	

	if(cust== 1 && barber==false){
		printf("\nPress W to wake up barber...");
		choice=getche();
		switch(choice){
		case 'w':
			barber=true;
			system("cls");
			main();
			break;	
							
		case 'W':
			barber=true;
			system("cls");
			main();
			break;	
					
		default:
		printf("\nWRONG CHOICE! WAIT AND READ CAREFULLY!!!....");
		sleep(5);
		system("cls");
		main();	
		}
	}
	
	printf("\nPress N to add customer...");
	choice=getche();
	switch(choice){
		case 'n':
			cust+=1;
			system("cls");
			main();
			break;
				
		case 'N':
			cust+=1;
			system("cls");
			main();
			break;	
			
		default:
		printf("\nWRONG CHOICE! WAIT AND READ CAREFULLY!!!....");
		sleep(5);
		system("cls");
		main();												
	}
	
}
