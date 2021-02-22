#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)

int main(){
    float a, b, c, d, x1, x2, x3, x;
    a=2;
    b=12340.0;
    c=3;
    d=b*b-4*a*c;
    printf("a=%f b=%f c=%f d=%f\n", a, b, c, d);
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    x3=c/a/x2;
    printf("x1=%8f\n", x1);
    printf("x2=%8f\n", x2);
    printf("x3=%8f\n", x3);
    return 0;
}