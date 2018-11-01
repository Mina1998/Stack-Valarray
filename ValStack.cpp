#include "pch.h"
#include <iostream>
#include <valarray>
#include <string>
#include "ValStack.h"

using namespace std;

ValStack::ValStack()
{
	size = 0;
	data.resize(SIZE);
}


ValStack::~ValStack()
{
}

char ValStack::pop() {
	if (size == 0)
	{
		cout << "\nUnderflow" << endl;
	}
	char t = data[--size];
	return t;
}

void ValStack:: push(char v) {
	if (size == SIZE) cout << "\nOverflow" << endl;
	else
		data[size++] = v;
}

bool ValStack:: IsEmpty() {
	return !((bool)size);
}

int ValStack:: Getsize() {
	return size;
}

void ValStack::clear() {
	for (int i = 0; i < data.size(); i++)
	{
		data[i] = 0;
	}
}
