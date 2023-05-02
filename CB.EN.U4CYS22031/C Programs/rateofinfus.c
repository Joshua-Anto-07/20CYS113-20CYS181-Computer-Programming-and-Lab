#include <stdio.h>
int main()
{
	double lit,T,rate;
	printf("enter the no. of litres in the bag: ");
	scanf("%lf",&lit);
	printf("The litres of medicine in the bag is %f ",lit);
	printf("Input the time in hours in which it was infused:\n ");
	scanf("%lf",&T);
	rate=lit/T;
	printf("The rate of infusion if %f litres per hour",rate);
	return 0;


}
