#include <stdio.h> /* standard input output library to display result */

void convert(double i) /* convert function from celsius to farenheit */
{
	double farh; /* farenheit variable */
	farh = i * 9/5 + 32.0;  /* trying to follow PEMDAS multiplication division then addition */
	printf("%.1lf\n", farh); /* formats output to only 1 decimal place looks nicer outputs farenheit */
}

int main(void)
{
	double cel = 34.5; /* celsius variable */
	convert(cel); /* calls function */
}