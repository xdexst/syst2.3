#define BASE_DEC 10
#include <stdio.h>
#include <math.h>
int main () {
int N = 475;
int tempN = N;
int digit ;
int a;
int b;
int c;
int s;
digit = tempN % BASE_DEC;
a = digit;
tempN= tempN / BASE_DEC;
digit = tempN % BASE_DEC;
b = digit;
tempN= tempN / BASE_DEC;
digit = tempN % BASE_DEC;
c = digit;
s = a + b + c ;
printf("%d",s);
return 0;
}
