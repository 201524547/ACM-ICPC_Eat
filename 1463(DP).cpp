#include <iostream>

using namespace std;

int d[1000001];

int min_count(int one, int two, int three);

int main()
{
    int input, output;

    cin >> input;

    d[0] = 0;
    d[1] = 0;
    d[2] = 1;
    d[3] = 1;

    for(int i = 4; i < input + 1; i++){
    int count_3 = 100000, count_2 = 10000000, count_1 = 100000000;

    if(i%2 == 0){
        count_2 = d[i/2]+1;
    }

    if(i%3 == 0){
        count_3 = d[i/3]+1;
    }

    count_1 = d[i-1]+1;


    d[i] = min_count(count_1, count_2, count_3);

    }
    cout << d[input];

    return 0;
}

int min_count(int one, int two, int three){

    int min_t;

    if(one < two){
        min_t = one;
    }
    else
        min_t = two;

    if(three <  min_t)
        min_t = three;

    return min_t;

}

