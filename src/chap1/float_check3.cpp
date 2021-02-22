#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)

int main(){
    int i;
    float x, s;
    x = 0.1;
    s = 0.0;
    rep(i, 10) s = s+x;
    printf("s=%.10f\n", s);
    s = 0.0;
    rep(i, 100000) s = s+x;
    printf("s=%.10f\n", s);
    return 0;
}