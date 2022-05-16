#include<stdio.h>
#include <unistd.h>
int cust;
bool chair,wait,barber;

main(){
for(int i=0;i<=8;i++){	
	if(cust==0 && barber==false && chair==false && wait==false){
		printf("\nCUSTOMERS[%d]BARBER[Sleeping]\tCHAIR[idle]\tWAITING[Empty]",cust);
		cust=1;
		barber=false;
		chair=false;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==false && chair==false && wait==false){
		printf("\nCUSTOMERS[%d]BARBER[Sleeping]\tCHAIR[idle]\tWAITING[Empty]",cust);
		cust=1;
		barber=true;
		chair=false;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==true && chair==false && wait==false){
		printf("\nCUSTOMERS[%d]BARBER[Awake]\tCHAIR[idle]\tWAITING[Empty]",cust);
		cust=1;
		barber=true;
		chair=true;
		wait=false;
		sleep(2);
	}
	else if(cust == 1 && barber==true && chair==true && wait==false){
		printf("\nCUSTOMERS[%d]BARBER[Awake]\tCHAIR[Reserved]\tWAITING[Empty]",cust);
		cust=2;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);
	}		
	else if(cust == 2 && barber==true && chair==true && wait==true){
		printf("\nCUSTOMERS[%d]BARBER[Cutting]\tCHAIR[Reserved]\tWAITING[Full]",cust);
		cust=3;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);			
	}	
	else if(cust == 3 && barber==true && chair==true && wait==true){
		printf("\nCUSTOMERS[%d]BARBER[Cutting]\tCHAIR[Reserved]\tWAITING[Full!]",cust);
		cust=2;
		barber=true;
		chair=true;
		wait=true;
		sleep(2);		
	}
}
}
