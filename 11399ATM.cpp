/*
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1001];

int main(){
    freopen("input.text", "r", stdin);

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int sum = arr[0]; // �ؿ� ������ 1���� ���⶧��
    for(int i = 1; i < n; i++){
        arr[i] = arr[i-1] +arr[i];
        sum += arr[i];
    }
    cout << sum <<endl;

}
*/
