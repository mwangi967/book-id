#include<stdio.h>
int main (){
	
	int bookID,duedate,returndate;
	int daysoverdue;
	int fineRate = 0;
	int fineAmount;
	
	printf("Enter bookID: ");
	scanf("%d",&bookID);
	
    printf("Enter duedate:(in days, eg.,25 for 25th day): ");
    scanf("%d",&duedate);
    
    printf("Enter returndate(in days, eg.,13 for 13th day): ");
    scanf("%d",&returndate);
    
    daysoverdue=returndate-duedate;
    if (daysoverdue <=0){
		fineRate = 0;
		fineAmount = 0;
	}
    
    else if (daysoverdue<=7){
		fineRate = 20;
		fineAmount = daysoverdue * fineRate;
	}
	else if (daysoverdue<=14){
		fineRate = 50;
		fineAmount = daysoverdue * fineRate; 
}
else{
fineRate=100;
fineAmount = daysoverdue * fineRate;
}

printf("\nbookID: %d\n", bookID);
printf("duedate: %d\n", duedate);
printf("returndate: %d\n", returndate);
printf("daysoverdue: %d\n", daysoverdue);
printf("fineRate:ksh. %d\n" , fineRate);
printf("fineAmount: ksh. %d\n", fineAmount);

return 0;

}
