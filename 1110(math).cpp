#include <iostream>
#include <algorithm>

using namespace std;

int Do_cycle(int n);
int Make_newnumber(int n);

int main(){

    int input, output;

    cin >> input;

    output = Do_cycle(input);

    cout << output;

    return 0;
}

int Do_cycle(int n){

    int new_number = n;
    int counter = 1;

    while(1){

        new_number = Make_newnumber(new_number);

        if(new_number == n)
            break;

        counter++;
    }

    return counter;
}

int Make_newnumber(int n){

    int new_number;

    new_number = n%10*10 + (n/10 + n%10)%10;

    return new_number;

}
