#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;
double f(double x){     return sqrt(x);     }

void bisection(double a, double b, double TOL){
    int n = ceil(log2(( b - a) / TOL ) );
    for (int i = 0; i < n; ++i) {
        double p = ( b - a ) / 2.0;
        cout<< setprecision(20)<<i+1<<"\t"<<p<<endl;
        if(f(a)*f(p) < 0)   b = p;
        else a = p;

    }
}

int main() {
    cout << "Hello, World!" << endl;
    bisection(0,1,pow(10,-6));
    return 0;
}
