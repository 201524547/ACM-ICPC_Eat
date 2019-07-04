#include <iostream>
#include <cstdio>

using namespace std;

int cnt0, cnt1;

struct cnt{
    int cnt0, cnt1;
};

cnt dp[41];

int main(){
    freopen("input.text", "r", stdin);

    int t;
    scanf("%d", &t);


    dp[0].cnt0 = 1;
    dp[0].cnt1 = 0;
    dp[1].cnt0 = 0;
    dp[1].cnt1 = 1;

    for(int i = 2; i <= 40; i++){
        dp[i].cnt0 = dp[i-1].cnt0 + dp[i-2].cnt0;
        dp[i].cnt1 = dp[i-1].cnt1 + dp[i-2].cnt1;
    }

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d %d\n", dp[n].cnt0, dp[n].cnt1);
    }
}
