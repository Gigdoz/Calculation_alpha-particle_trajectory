#include "Class.h"
#include <iostream>


int main()
{
	PointArr A, C;
	A.SolutionTreck_File("Treck_1.txt", 7, 5, 1, 0.01);
	C.SolutionTreck_File("Treck_2.txt", 4, 5, 1, 0.01);
	return 0;
}