#include <stdio.h>
int main ()
{
   double x, sum;
   int i;
   freopen ("in.txt", "r", stdin);
   sum = 0.0;
   for (i = 0; i < 12; i++) {
      scanf (" %lf", &x);
      sum += x;
   }
   sum /= 12;
   printf ("$%.2lf\n", sum);
   return 0;
}
