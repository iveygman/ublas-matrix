#include "UMatrix.hpp"
#include <stdio.h>

int main () 
{
	UMatrix m;
	UMatrix m3(3,3);
	UMatrix m3_1(3,3,matrix_fill::ones);
	
	printf("OK\n");
	return 0;
}