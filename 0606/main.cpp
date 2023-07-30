//#include<stdio.h>
#include<iostream>
#include<string>
#include <cmath>
using namespace std;
double calcularepi()
{
	double pi = 0.0;
	double num = 4.0;
	double denominator = 1.0;
	double term = num / denominator;
	int iterarions = 0;
	while (abs(term) > 1e-15)
	{
		pi += term;
		iterarions++;

		num *= -1.0 * 4.0 * 4.0;
		denominator += 2.0;
		term = num / denominator;
	}
	cout << "Number of iterations:" << iterarions << "\n";

	return pi;
}
int main()
{
	
	double pi = calcularepi();
	cout << "π = " << pi << "\n";

}