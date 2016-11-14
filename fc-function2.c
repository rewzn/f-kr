#include <stdio.h>

float fc_convert(float);

int main(void)
{
	float i;
	float lower, upper;
	
	printf("Temperatur in Fahrenheit von: ");
	scanf("%f", &lower);
	printf("Temperatur in Fahrenheit bis: ");
	scanf("%f", &upper);
	
	for (i = lower; i <= upper; i++) {
		printf("%.2f Grad Fahrenheit ist: %.2f Grad Celsius\n", i, fc_convert(i));
	}
	
	return 0;

}

float fc_convert(float x)
{
	x = (x - 32) / 1.8;
	return x;
}
