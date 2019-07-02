/*
#include <iostream>
#include <cstdio>

using namespace std;

int d[1000001];

int main(){
    freopen("input.text","r",stdin);

    int n;
    scanf("%d", &n);
    d[0] = 0;
    d[1] = 0;
    d[2] = 1;
    d[3] = 1;
    for(int i = 4; i <= n; i++){
        int a=1000000,b=1000000,c=1000000;
        if(i%2 == 0){
            a = d[i/2]+1;
        }
        if(i%3 == 0){
            b = d[i/3]+1;
        }
        c = d[i-1] +1;

        d[i] = min(min(a,b),c);
    }
    cout << d[n];
}
*/
