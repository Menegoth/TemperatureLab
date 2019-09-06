//Antonio Monteiro, Temperature Converter

#include <stdio.h>

int main() {

	//Declare variables 
	double farenheit = 0.0;
	double celsius = 0.0;

	//Ask user for farenheit
	printf("What temperature is it today? ");
	scanf_s("%lf", &farenheit);

	//Convert F to C
	celsius = (farenheit - 32.0) * (5.0 / 9.0);

	//Output values
	printf("%f degrees farenheit is %f degrees celsius.\n", farenheit, celsius);

	system("pause");
	return 0;

}