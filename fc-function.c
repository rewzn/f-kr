#include <stdio.h>

int fc_convert(int);

int main(void)
{
	int user_temp;
	
	printf("Temperatur in Fahrenheit angeben: ");
	scanf("%d", &user_temp);
	
	printf("%d Grad Fahrenheit ist: %d Grad Celsius\n", user_temp, fc_convert(user_temp));
	
	return 0;
}

int fc_convert(int x)
{
	x = (x - 32) / 1.8;
	return x;
}
