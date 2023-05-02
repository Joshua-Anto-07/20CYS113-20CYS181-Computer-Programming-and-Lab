#include <stdio.h>

int main()
{ 
	double t,T;
	printf("enter the number of hours it has been: ");
	scanf("%lf",&t);
	T= (4*t*t/(t+2))-20;
	printf("the temperature has been changed by %f degree celcius",T);
	return 0;
}
