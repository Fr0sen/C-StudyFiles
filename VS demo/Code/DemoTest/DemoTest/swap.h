#pragma once
#include <iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << a << " " << b;
}