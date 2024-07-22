#include <stdio.h>

/**
 * Exervices en C 
 *
 */

void reset_to_98(int *n)
	{
		*n = 98;
	}

int main(void) {
	int n = 0;
	reset_to_98(&n);
	return 0;
}
