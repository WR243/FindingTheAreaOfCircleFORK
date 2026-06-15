#include "circle.h"
using namespace std;

double area(int a);

double area(int a){
	double const pi = 3.14;
	double s = pi * a * a;
	return s;
}