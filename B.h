#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class B
{
	int b;
public:
	B()
		: b(0)
	{ }
	B(int x)
	{
		b = x;
	}
	int getB() { return  b; }
	void show_B()
	{
		cout << "class B:" << endl;
		cout << "show_B()" << endl
			<< "B::b = " << b << endl << endl;
	}
};

class D2 : private B
{
	int d2;
public:
	D2(int x, int y) : B(y) { d2 = x; }

	void show_D2()
	{
		cout << "class D2: " << endl;
		show_B();
		cout << "show_D2()" << endl << "D2::d2 = " << d2 << endl << endl;
	}
};


class D3 : private B
{
	int d3;
public:
	D3(int x, int y) : B(y) { d3 = x; }

	void show_D3()
	{
		cout << "class D3: " << endl;
		show_B();
		cout << "show_D3()" << endl << "D3::d3 = " << d3 << endl << endl;
	}
};

class D5 : public D2, private D3
{
	int d5;
public:
	D5(int x, int y, int z, int i, int j) : D2(y, z), D3(i, j) { d5 = x; }

	void show_D5()
	{
		cout << "class D5: " << endl;
		show_D2();
		show_D3();
		cout << "show_D5()" << endl << "D5::d5 = " << d5 << endl << endl;
	}
};

class D1 : public B
{
	int d1;
public:
	D1(int x, int y) : B(y) { d1 = x; }

	void show_D1()
	{
		cout << "class D1: " << endl;
		show_B();
		cout << "show_D1()" << endl << "D1::d1 = " << d1 << endl << endl;
	}
};

class D4 : private D1
{
	int d4;
public:
	D4(int x, int y) : D1(x, y) { d4 = x; }

	void show_D4()
	{
		cout << "class D4: " << endl;
		show_B();
		cout << "show_D4()" << endl << "D4::d4 = " << d4 << endl << endl;
	}
};