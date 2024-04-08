#include "B.h"
#include <iostream>
using namespace std;

int main() {


	B o0(777);
	cout << "B o0(777);" << endl;
	cout << "sizeof(B) = " << sizeof(B) << endl;
	cout << endl << "Ierarhia B: " << endl;
	o0.show_B();

	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ierarhia D1: " << endl;
	o1.show_D1();

	D2 o2(1000, 2000);
	cout << "D2 o2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ierarhia D2: " << endl;
	o2.show_D2();

	D3 o3(100, 200);
	cout << "D3 o3(100, 200);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ierarhia D3: " << endl;
	o3.show_D3();

	D4 o4(1, 2);
	cout << "D4 o4(1, 2);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "Ierarhia D4: " << endl;
	o4.show_D4();

	D5 o5(10, 11, 12, 13, 14);
	cout << "D5 o5(10, 11, 12, 13, 14);" << endl;
	cout << "sizeof(D5) = " << sizeof(D5) << endl;
	cout << endl << "Ierarhia D5: " << endl;
	o5.show_D5();
	return 0;
}