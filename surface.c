#include<stdio.h>
#include<math.h>
void main()
{
	float volume,surfacearea,r,pi;
	pi=3.14;
	r=5;
	surfacearea=4*pi*r*r;
	volume=1.33*r*r*r;
	printf("Surface area=%f Volume=%f r=%f pi=%f",volume,surfacearea,r,pi);
}
