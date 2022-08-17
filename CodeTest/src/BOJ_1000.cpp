#include "BOJ_1000.h"
#include <iostream>
using namespace std;

void input(char* num1, char* num2)
{
	cin >> *num1 >> *num2;
}

int algo(char* num1, char* num2)
{
	return *num1 + *num2 - 96;
}

void output(int result)
{
	cout << result;
}

void start()
{
	// init variable
	char num1, num2;
	int result;

	// input
	input(&num1, &num2);

	// algorithm
	result = algo(&num1, &num2);

	// output
	output(result);
}