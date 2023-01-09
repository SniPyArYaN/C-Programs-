#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 int ts1, h1, m1, s1, ts2, h2, m2, s2,ts,h,m,s;
 printf ("Input 1st Time in the format hh:mm:ss--> ");
 scanf ("%d %d %d", &h1, &m1, &s1);
 ts1=(h1*3600)+(m1*60)+s1;
 printf ("Input 2nd Time in the format hh:mm:ss-->");
 scanf ("%d %d %d", &h2, &m2, &s2);
 ts2=(h2*3600)+(m2*60)+s2;
 ts= abs(ts1-ts2);
 h = (ts/3600);
 m = (ts - (3600*h) ) /60;
 s = (ts - (3600*h) -(m*60) );
 printf ("\nDifference between the 2 Times in the format hh:mm:ss --> %d:%d:%d",h,m,s);
 return 0;
}