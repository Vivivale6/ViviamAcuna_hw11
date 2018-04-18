#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Se declaran las variables globales
double G;
double M;
float dxdt(double x, double t, double v);
float dvdt(double v, double t, double x );
void RK(double t, double x, double v, double h);
  
//Funcion main 
int main (){
  
  double v = 100.0;
  G =10.0;
  M =1000.0;
  double m =1.0;
  double h = 0.01;
  double t;
  double x=1.0;
  double n = (0.01*x)/h;
  int i;

  while(x<n){
    
    RK(t,x,v,h);
    cout << x << " " << v << " " << t << endl;
    
  }

  
 
  return 0;
  
  }

//Funcion que da la velocidad
float dxdt(double x, double t, double v){
      return v;
    }
//Funcion que deriva v con respecto a t
float dvdt(double v, double t, double x ){
  return -G*M/x*x;
  }


//Funcion que calcula las ecuaciones
void RK(double t, double x, double v, double h){


  double k1,k2,k3,k4;
  double k12, k22, k32,k42;


  k1 = dxdt(t,x,v);
  k12 = dvdt(t,x,v);

  k2 = dxdt(t + h/2,x + k1 * h/2, v + k12 * h/2);
  k22 = dvdt(t + h/2,x + k1 * h/2, v + k12 * h/2);

  k3 = dxdt(t + h/2, x + k2 * h/2, v + k22 * h/2);
  k32 = dvdt(t + h/2,x + k2 * h/2, v + k22 * h/2);

  k4 = dxdt(t + h, x + k3 * h, v + k32 * h);
  k42 = dvdt(t + h, x + k3 * h,  + k32 * h);

  t = t + h;
  x = x + h * (k1 + 2*k2 + 2*k3 + k4)/6.0;
  v = v + h * (k12 + 2*k22 + 2*k32 + k42)/6.0;




}

