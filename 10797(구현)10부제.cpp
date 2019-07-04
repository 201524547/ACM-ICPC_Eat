#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[1000001];
int b[1000001];
int ab[1000001];

bool desc(int a, int b){
    return a>b;
}

int main()
{
    freopen("input.text", "r", stdin);
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < t; i++){
        scanf("%d", &b[i]);
    }

    sort(a, a+t);
    sort(b, b+t, desc);

    int sum = 0;
    for(int i = 0; i < t; i++){
        sum += a[i] * b[i];
    }
    printf("%d", sum);
}
