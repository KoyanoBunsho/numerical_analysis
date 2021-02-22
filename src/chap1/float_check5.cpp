#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)

int main(){
    float data[]={1.00001, 1.00001, 1.00003};
    int n=3;
    int i;
    float s, s2, V, m;
    s=0;
    s2=0;
    rep(i, n){
        s=s+data[i];
        s2=s2+data[i]*data[i];
    }
    m=s/n;
    V=(s2-n*m*m)/(n-1);
    printf("s=%g s2=%g\n", s, s2);
    printf("m=%g V=%g\n", m, V);
    return 0;
}