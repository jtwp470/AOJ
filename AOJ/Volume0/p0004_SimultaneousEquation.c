#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  double a,b,c,d,e,f;

  while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF) {
    double hanbetu = a * e - b * d;
    if(hanbetu == 0) {
      printf("Exception: Happen zero divide\n");    
      exit (0);
    }  
    else {
      double x = (e*c - b*f)/hanbetu;
      double y = (a*f - c*d)/hanbetu;
      if(x == -0.0)
	x = 0;
      if (y == -0.0)
	y = 0; 
      printf("%.3f %.3f\n", x, y);
    }    
  }
  return 0;
}
