/*
#include <iostream>
#include <cstdio>

using namespace std;

int ans;

int main(){
    freopen("input.text", "r", stdin);

    int n;
    scanf("%d", &n);

    if( n>=1 && n<=99){
        ans = n;
    }else{
        ans = 99;
        for(int i = 100; i <= n; i++){
            int first = i/100 - (i/10)%10;
            int second = i/10%10 - i%10;
            if(first == second)
                ans += 1;
        }
    }
    printf("%d", ans);
}
*/
