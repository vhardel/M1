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




// Take care: Numerov method use addition of very small numbers, as h^2, with number of order 1.


int main(){
    double a=0,b=1;
    int N=1000;
    double h=1/double(N-1);
    
    
    double psi_0=0;
    double gamma2=200;
    
    vector<long double> epsilon(11);
    for(int n=1;n<=10;n++){epsilon[n]=n*n*PI*PI/gamma2-1; cout<<n<<"    "<<epsilon[n]<<endl;}

    double e=0;
    
    
    vector<double> psi(N);
    vector<double> x(N);
    vector<double> V(N,-1.);
    
    vector<double> k2(N);
    for(int i=0;i<N;i++) k2[i]=gamma2*(e-V[i]);
    
    
    
    psi[0]=psi_0;
    psi[1]=1e-4;
    x[0]=a;
    x[1]=a+h;
    string num;
    for(int n=1;n<11;n++){
        num=to_string(n);
        ofstream ofile("well_potential_"+num+"_solution.dat");
        e=epsilon[n];
        for(int i=0;i<N;i++) k2[i]=gamma2*(e-V[i]);
        for(int i=2;i<N+1;i++){
            psi[i]=(2*(1-(5.0/12.)*h*h*k2[i-1])*psi[i-1]-(1+(1.0/12.)*h*h*k2[i-2])*psi[i-2])/(1+(1.0/12.)*h*h*k2[i]);
            x[i]=x[i-1]+h;
            ofile<<x[i]<<"\t"<<psi[i]<<endl;
        }
        psi[0]=psi_0;
        psi[1]=1e-4;
        x[0]=a;
        x[1]=a+h;
        ofile.close();
    }
    
}



//We won't be exactely 0 because epsilon were found with exact energy, while here the wave function is approximated and the corresponding energies are a little bit differents
