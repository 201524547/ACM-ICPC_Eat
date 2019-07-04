#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>

using namespace std;

int a[11];

int main(){

    freopen("input.text", "r", stdin);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        int num = int(s[i]) - 48;
        //printf("num : %d\n", num);
        a[num] +=1;
    }
    if(double((a[6] + a[9])%2 != 0)){
        a[6] = (a[6] + a[9])/2 + 1;
    }else{
        a[6] = (a[6] + a[9])/2;
    }
    int max = 0;
    for(int i = 0; i <9; i++){
        if(max < a[i])
            max = a[i];
    }

    printf("%d", max);
}
