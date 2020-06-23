#include <iostream>
using namespace std;

/* 
	Fermat Last Theorem
 	x³ + y³ = z³
 	a <= b, c <= d, a <= x <= b, c <= y <= d
 	
	a	b	c	d		first 'z' natural solution
	2	5	4	13		no solution
	1	1	1	1		0³ + 0³ = 0³
	0	1	0	1
	1	100	1	100
*/





// Pre: integer 'a'
// Post: reversed integer 'a' in expressed 'base' 
int reverseNumber(int a, int base) {
	int result = 0;
	while (a > 0) {
		result = result*base + a%base;
		a /= base;
	}
	return result;
}

void sumCubes(int a, int b, int& c) {
	for (int i = a; i<=b; ++i) {
		c += i*i*i;
	}
}

int main() {
	
}
