#include<stdio.h>
int main(){
	float Radius , PI = 3.1416 , Area;
	Radius = 1;
	Area = PI * ( Radius * Radius );
	printf("The area of the circle is %.2lf\n" , Area);
	return 0;
}
