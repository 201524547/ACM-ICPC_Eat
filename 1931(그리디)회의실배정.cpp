#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct time{
    int start, finish;
};

bool cmp(const time &a, const time &b){ //비교함수
    if( a.finish == b.finish)
        return a.start < b.start;
    else
        return a.finish < b.finish;
}

time arr[1000001];

int main()
{
    freopen("input.text", "r", stdin);
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d", &arr[i].start, &arr[i].finish);
    }

    sort(arr, arr+t, cmp);

    int cnt = 1;
    int now = arr[0].finish;
    for(int i = 1; i < t; i++){
        if(now <= arr[i].start){
            cnt++;
            now = arr[i].finish;
        }
    }
    printf("%d", cnt);

}
