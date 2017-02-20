#include<stdio.h>
#define NUMS 4
int main(void)
{
	int i, total_low = 0, total_high = 0,hd ,ld, total_average = 0.0, hv = -40, lv = 40;
	float average = 0.0;
	// hd = high date, ld = low date, hv = high value, lv = low value
	printf("---=== IPC Temperature Analyzer ===---\n");

	for(i=0;i<NUMS;i++){
	printf("Enter the high value for day %d: ",i+1);
	scanf("%d",&total_high);
	printf("\n");
	printf("Enter the low value for day %d: ",i+1);
	scanf("%d",&total_low);
	printf("\n");

	while(total_low < -40 || total_high > 40 || total_low > total_high)
	{
	printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
	printf("\n");
	printf("Enter the high value for day %d: ",i+1);
	scanf("%d",&total_high);
	printf("\n");
	printf("Enter the low value for day %d: ",i+1);
	scanf("%d",&total_low);
	printf("\n");
	}

	 if(hv<total_high)
        {
	hv = total_high;
	hd = i+1;
	}

	 if(lv > total_low)
	{
	lv = total_low;
	ld = i+1; }
	        total_average = total_average + total_high + total_low;
	}
	        average = (float)total_average / (NUMS * 2);
		printf("The average (mean) temperature was: %.2lf\n",average);
		
		printf("The highest temperature was %d, on day %d",hv ,hd);
		printf("\n");
		printf("The lowest temperature was %d, on day %d",lv ,ld);
                printf("\n");
	return 0;
}

