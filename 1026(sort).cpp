#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int Multiple_Array(int* A, int* B, int N){

    int Sum = 0;

    for(int i = 0; i < N; i++){
            Sum = Sum + A[i]*B[i];
    }

    return Sum;

}

int compare_inc(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;    // 오름차순
}

름
int compare_dec(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;    // 내림차순
}

void Sort_Array(int* A, int* B, int N){
    qsort(A,N,sizeof(int),compare_inc);
    qsort(B,N,sizeof(int),compare_dec);
}

int main()
{
    int N, output;
    int* A, *B;

    cin >> N;

    A = new int[N];
    B = new int[N];

    for(int i = 0; i < N; i++){
        cin>> A[i];
    }

    for(int i = 0; i < N; i++){
        cin>> B[i];
    }

    Sort_Array(A,B,N);
    output = Multiple_Array(A,B,N);

    cout << output;

    return 0;
}
