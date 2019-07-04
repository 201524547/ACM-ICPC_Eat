#include <iostream>
#include <cstdio>
#include <string.h> //stdcmp를 사용하기 위해서

using namespace std;

int main(){
    freopen("input.text", "r", stdin);
    int ans = 0;
    char c;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            scanf("%c", &c);
            if(c == 'F' && (i+j)%2 == 0){
                ans++;
            }
        }
        scanf("%c", &c);
    }

    printf("%d",ans);
}
