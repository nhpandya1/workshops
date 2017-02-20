#include <stdio.h>
int main(void)
	{        
	int day, i;
	int high[10];
	int low[10];
        float avg = 0.0, tt = 0.0;
	printf("---=== IPC Temperature Analyzer V2.0 ===---\n");
	
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d",&day);
	printf("\n");
        while(day < 3 || day > 10)
	{       
	        printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
	        scanf("%d",&day);
	}
	for(i=0; i<day; i++)
	{
	        printf("Day %d - High: ",i+1);
		scanf("%d" ,&high[i]);
		printf("Day %d - Low: ",i+1);
		scanf("%d" ,&low[i]);
	}
	printf("\n");
	printf("Day  Hi  Low\n");
	for(i=0; i<day; i++)
	{
		printf("%d    %d    %d\n",i+1,high[i],low[i]);
	}
        printf("\n");
	printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d",&day);
	printf("\n");
	
 	 
        {			
		       	printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d",&day);
			
	      while(day!=-1){
	            if (day>0&&day<day+1){
		      tt = 0;
		      for (i=0; i<day; i++){
		              tt = tt+high[i]+low[i];
	}

	avg = (float)tt / (day*2);
        printf("\n");
	printf("The average temperature up to day %d is: %.2lf",day, avg);
        printf("\n");
       	printf("\n");
	printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        
	scanf("%d",&day);
         }
	

	}
	printf("\nGoodbye!\n");
	}	
	 return 0;
	}


