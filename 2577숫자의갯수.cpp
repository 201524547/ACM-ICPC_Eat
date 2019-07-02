/*
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h> //itoa를 쓰기 위해서
#include <sstream>

using namespace std;

int arr[10];

int main()
{

    freopen("input.text","r",stdin);
    int a, b, c;
    scanf("%d\n%d\n%d",&a, &b, &c);

    long sum = a*b*c;
    stringstream ss;
    ss << sum;
    string str = ss.str();


    for(int i = 0; i < str.length(); i++){
        int num = int(str[i]) - 48;
        arr[num] += 1;

    }
    for(int i = 0; i < 10; i++){
        printf("%d\n",arr[i]);
    }
}
*/
