#include <stdio.h>
#include "functions.h"

int main()
{
	// use function
	printf("%d\n", add(2, 6));

	// use macro
	printf("%d\n", ADD(3 ,7));
}