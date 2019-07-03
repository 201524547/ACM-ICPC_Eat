/*
#include <iostream>
#include <cstdio>

using namespace std;

int a[11];

int main()
{
    freopen("input.text","r",stdin);
    int n, price;
    scanf("%d %d",&n, &price);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int cnt = 0;
    for(int i = n-1; i >= 0; i--){
        cnt += price/a[i];
        price = price % a[i];
        if(price == 0) break;
    }
    printf("%d", cnt);
}
*/
