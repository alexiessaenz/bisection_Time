#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;
double f(double x){     return sqrt(x);     }

void bisection(double a, double b, double TOL){
    int n = ceil(log2(( b - a) / TOL ) );
}

int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}
