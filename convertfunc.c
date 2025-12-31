#include <stdio.h>
double metre(double a);
double gram(double c);
double sıc(double p);

int main(void)
{
  int i=0;
  int b;
  scanf("%d",&b);
  for (i=0;i<b;i++){
      double v;
      char a;
      scanf("%lf %c",&v, &a);
      if (a =='m'){
           v=metre(v);
           printf("%lf ft\n",v);
      }
      else if (a =='g'){
          v=gram(v);
          printf("%lf lbs\n",v);
      }
      else if (a =='c'){
          v=sıc(v);
          printf("%lf f\n",v);
      }
      
  }
 
  return 0;
}



double metre(double a){
    double don=3.2808*a;
    return don;
}

double gram(double c){
    double cev=0.002205*c;
    return cev;
}
double sıc(double p){
    double k=32+p*(1.8);
    return k;
}
