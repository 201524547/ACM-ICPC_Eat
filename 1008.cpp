#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    double k = (double)A / B;

    cout << fixed;
    cout.precision(9);

    cout << k;

    return 0;

}
