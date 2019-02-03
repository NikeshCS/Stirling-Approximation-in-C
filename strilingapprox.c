#include <stdio.h>
#include <math.h>
 
 
 double lnfactorial( int a)
  {
       
    double z;
      if (a == 1)
          return 0;
      else
      {
          z = lgamma(a+1);
           
          return (z);
      }
  }
 
double stirlingFormula(int a)
{
   double result;
   double val;
   val = log(a);
   result = val * a - a;
   return (result);
}

int main(void)
{
    double a;
    double f;
    double error;
    double percentError;
    int n;
    fprintf(stdout,"ln(Factorial)       Stirling's Formula       Error            Error Percent\n");
    for(n = 1; n <= 100; n++)
    {
      f = lnfactorial(n);
      a = stirlingFormula(n);
      error = f - a;
      percentError = (error/a)*100;
      if(n==1)
      {
         percentError = percentError * -1;
      }
      if(n==2)
      {
        percentError = percentError * -1;
      }
      fprintf(stdout, "%.6e         %6e          %6e       %6e\n", f, a, error, percentError);   
    }         
     
     
    return 0;
}