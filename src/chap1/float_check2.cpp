#include<bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    float u, v, x, y;
    a = 0.1;
    b = 0.3;
    c = 0.5;
    u = a+b;
    v = u+c;
    printf("v=%.10f\n", v);
    x = b+c;
    y = a+x;
    printf("y=%.10f\n", y);
    return 0;
}