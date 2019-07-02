/*
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.text", "r", stdin);

    int n;
    scanf("%d", &n);

    int cnt = 0;

    if(n%5 == 0)
        cnt = n/5;
    else if(n%5 == 1)
        cnt = n/5 + 1;
    else if(n%5 == 2){
        cnt = n/5 + 2;
        if(n <= 7)
            cnt = -1;
    }
    else if(n%5 == 3)
        cnt = n/5 +1;
    else if(n%5 == 4){
        cnt = n/5 +2;
        if (n < 9)
            cnt = -1;
    }

    printf("%d", cnt);
}
*/
