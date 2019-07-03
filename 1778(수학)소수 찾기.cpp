/*
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    freopen("input.text", "r", stdin);

    int n, cnt = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int t;
        scanf("%d", &t);

        if(t == 1){
            cnt += 1;
            continue;
        }

        for(int j = 2; j*j <= t; j++){
            if(t%j == 0){
                cnt += 1;
                break;
            }
        }
    }
    printf("%d", n-cnt);

}
*/
