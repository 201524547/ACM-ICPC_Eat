#include <iostream>

using namespace std;

int SugarSugar(int n){

    int cnt;

    int mod_case = n%5;

    switch(mod_case){

    case 0:
        cnt = n/5;
        break;
    case 1:
        cnt = n/5 + 1;
        break;
    case 2:
        cnt = n/5 + 2;
        if( n <= 7)
            cnt = -1;
        break;
    case 3:
        cnt = n/5 + 1;
        break;
    case 4:
        cnt = n/5 + 2;
        if(n < 9)
            cnt = -1;
        break;
    default:
        cnt = -1;
        break;
    }

    return cnt;

}

int main(){

    int input, output;

    cin >> input;

    output = SugarSugar(input);

    cout << output;

    return 0;

}
