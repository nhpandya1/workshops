#include<stdio.h>

int main(void)
{
	int loonies = 0, Quarters = 0.0, Dimes = 0, Nickels = 0, Pennies = 0;
	double amount = 0.0, balOwing = 0.0, balOwing2 = 0.0, GST=0.0;
	double  balOwing1 = 0.0, balOwing3 = 0.0, balOwing4 = 0.0, balOwing5 =0.0;
	printf("Please enter the amount to be paid: $");
	scanf("%lf",&amount);
	GST = (amount * 0.13) + 0.005;
	balOwing1 = amount + GST;
	loonies = balOwing1 / 1;
	balOwing = balOwing1 - (loonies * 1);
	Quarters = balOwing / 0.25;
	balOwing2 = balOwing - (Quarters * 0.25);
	Dimes = balOwing2 / .10;
	balOwing3 = balOwing2 - (Dimes * .10);
	Nickels = balOwing3 /.05;
	balOwing4 = balOwing3 - (Nickels * .05);
	Pennies = balOwing4 / .01;
	balOwing5 = balOwing4 - (Pennies * .01);
	printf("GST: %.2lf\n",GST);
	printf("Balance owing: $%.2lf\n" ,balOwing1);
	printf("Loonies required: %d, balance owing $%.2lf\n",loonies ,balOwing);
	printf("Quarters required: %d, balance owing $%.2lf\n",Quarters ,balOwing2);
	printf("Dimes required: %d, balance owing $%.2lf\n" ,Dimes ,balOwing3);
	printf("Nickels required: %d, balance owing $%.2lf\n" ,Nickels ,balOwing4);
	printf("Pennies required: %d, balance owing $%.2lf\n",Pennies, balOwing5);
	return 0;
}
