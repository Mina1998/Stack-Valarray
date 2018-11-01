#include "pch.h"
#include <iostream>
#include <valarray>
#include <string>
#include "ValStack.h"

using namespace std;

int main()
{
	ValStack stack;
	stack.push('a');
	stack.push('b');
	stack.push('c');

	cout << stack.pop() << " ";
	cout << stack.pop() << " ";
	cout << endl << "The Size of the Stack now is : " << stack.Getsize() << endl;
	if (stack.IsEmpty()) {
		cout << "The Stack is Empty" << endl;
	}
	if (!stack.IsEmpty()) {
		cout << "The Stack is not Empty" << endl;
	}
	cout << stack.pop() << " ";
	cout << stack.pop() << " ";

	return 0;
}