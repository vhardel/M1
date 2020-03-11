#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <vector>
#include <fstream>
#include <complex>
#include <string>
using namespace std;


#define PI 3.14159265359


// Here, we have to use periodical boundary conditions.
// Then , we will use middle point scheme.

int main(){
    double a=0,b=1;
    int N=1000;
    double h=1/double(N-1);
    
    double psi_0=0;
    
    vector<double> psi(N);
    vector<double> x(N);
    return 1;
}
