#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.text","r",stdin);

    int n;
    scanf("%d", &n);

    int ans = 1;
    for(int i = 2; i <= n; i++){
        ans *= i;
    }
    printf("%d", ans);
}
