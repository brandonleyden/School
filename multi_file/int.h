#pragma once
#include "die.h"
#include <iostream>

class Int
{
public:
	Int(int y);
	const int get();
	void set(int x);
	friend Int operator<<(complex Tnt);

private:
	int x;
};

