#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int a[28];

int main(){
    freopen("input.text", "r", stdin);

    int n, cnt = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        memset(a, 0, sizeof(a));
        string s;
        cin >> s;

        if(s.length() == 1){
            cnt += 1;
        }else{
            a[s[0]-'a'] = 1;

            for(int j = 1; j < s.length(); j++){

                a[s[j] - 'a'] += 1;
                if((a[s[j] - 'a'] >= 2) && (s[j]!= s[j-1])){
                    break;
                }
                if(j == s.length()-1){
                    cnt += 1;
                }
            }
        }

    }
    printf("%d", cnt);
}
