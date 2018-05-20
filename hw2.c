#include <stdio.h>
#include <string.h>

/*
The INPUT is the date and the OUTPUT is the number of weeks from the 1st January 2000 up to the date in input.
*/

extern unsigned int countweeks (char *date); //pointer to a char string containing the date in form dd/mm/yy 

int main (){
	
	char date[9] = "01/01/01"; 
	int dd,mm,yy;	
	int week_number;
	
	/*
	printf("Plase insert your day(dd): "); //Receive the day
	scanf("%d", &dd);
	printf("\n");
	
	printf("Plase insert your month(mm): "); //Receive the month
	scanf("%d", &mm);
	printf("\n");
	
	printf("Plase insert your year(yy): "); //Receive the year
	scanf("%d", &yy );
	printf("\n");
		
	date[0]=(dd/10);
	date[1]=(dd%10);
	date[2]='/';
	date[3]=(mm/10);
	date[4]=(mm%10);
	date[5]='/';
	date[6]=(yy/10);
	date[7]=(yy%10);
	date[8]='\0';              //string ended
	*/
	
	week_number=countweeks(date);  //call the assembly function

	printf("\nThe number of week is: %d",week_number);

return 0;	
	
	
}