#include <stdio.h>

float fc_convert(float);
float cf_convert(float);

int main(void)
{
	int bad_counter = 0;
	float i;
	float lower, upper;
	char conv_type;
	
	do {
		if (bad_counter != 0) {
			printf("Ungültige Auswahl: %c\n\n", conv_type);
		}
		printf("[C]elsius -> Fahrenheit oder\n[F]ahrenheit -> Celsius\nAuswahl: ");
		scanf(" %c", &conv_type);
		bad_counter += 1;
	} while((conv_type != 'C') && (conv_type != 'c') && (conv_type != 'F') && (conv_type != 'f'));
	printf("Temperatur von: ");
	scanf("%f", &lower);
	printf("Temperatur bis: ");
	scanf("%f", &upper);
	switch(conv_type)
	{
	case 'F':
	case 'f':
		for (i = lower; i <= upper; i++) {
			printf("%.2f Grad Fahrenheit ist: %.2f Grad Celsius\n", i, fc_convert(i));
		}
		break;
	case 'C':
	case 'c':
		for (i = lower; i <= upper; i++) {
			printf("%.2f Grad Celsius ist: %.2f Grad Fahrenheit\n", i, cf_convert(i));
		}
		break;
	default:
		break;
	}

	return 0;

}

float fc_convert(float x)
{
	x = (x - 32) / 1.8;
	return x;
}

float cf_convert(float x)
{
	x = (x * 1.8) + 32;
	return x;
}
