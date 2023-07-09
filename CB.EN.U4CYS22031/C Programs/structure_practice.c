#include <stdio.h>
struct comp{
	int real;
	int imag;
};
void main()
{
 struct comp a,b,c;
printf("Enter real part and imaginary part of first number:\n");
scanf("%d %d",&a.real,&a.imag);
printf("Enter real part and imaginary part of second number:\n");
scanf("%d %d",&b.real,&b.imag);
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
printf("(%d + i%d) +(%d +i%d) = %d +i%d\n",a.real, a.imag, b.real, b.imag,c.real, c.imag);
printf("\n(%d + i%d) +(%d +i%d) = %d +i%d",a.real, a.imag, b.real, b.imag,a.real-b.real,a.imag-b.imag);
}

