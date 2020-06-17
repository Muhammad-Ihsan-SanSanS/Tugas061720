#include <iostream>
using namespace std;

int hitungHambatanSeri (int R1 , int R2 , int R3) {
	
	return R1 + R2 + R3;
}

float hitungHambatanParalel (float r1 , float r2 , float r3) {
	int A = r1 * r2 * r3;
	float B, C, D, E, F;
	B = A / r1 * 1;
	C = A / r2 * 1;
	D = A / r3 * 1;
	
	E = B + C + D;
	F = E / A;
	return F;
}

int main () {
	cout << hitungHambatanSeri (1,2,3) <<endl;
	cout << hitungHambatanParalel (2,2,1);
}
