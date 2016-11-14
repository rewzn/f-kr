#include <stdio.h>

int main(void)
{
	int bottles = 99;
	
	while (bottles >= 0) {
		printf("%d bottles of beer on the wall, %d bottles of beer.\n", bottles, bottles);
		bottles -= 1;
		printf("Take one down and pass it around, %d bottles of beer on the wall.\n", bottles);
	}
	
	return 0;
}
