/*
#include <iostream>
#include <cstdio>

using namespace std;

int d[1000001];

int main(){
    freopen("input.text","r",stdin);

    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    d[4] = 7;
    for(int i = 5; i < 11; i++){
        d[i] = d[i-1] +d[i-2] +d[i-3];
    }

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        printf("%d\n",d[n]);
    }
}
*/
