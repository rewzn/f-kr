#include <stdio.h>

int main(void)
{
	int count = 0;
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			count++;
		}
	}
	
	printf("total characters: %d\n", count);
	
	return 0;
}
