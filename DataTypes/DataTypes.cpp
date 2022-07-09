#include <iostream>

#include "vec.h"

int main() {
	vec<3> vec3 = vec<3>();
	vec3[1] = 2;
	double x = vec3[1] + 1;
	std::cout << x << std::endl;
}