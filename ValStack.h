#pragma once
#include <valarray>
using namespace std;

const int SIZE = 20;
class ValStack
{
private:
	valarray <char> data;
	int  size;
public:
	ValStack();
	~ValStack();
	char pop();
	void push(char v);
	bool IsEmpty();
	int Getsize();
	void clear();
};

