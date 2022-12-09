
#include <iostream>
using namespace std;

// Compiler version g++ 6.3.0
void cyclicSwap(int *a[6])
{
    int temp, b, c;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
int main()
{
    int A[N] = {
        1,
        2,
        3,
        4,
        5,
    };
    for (int x = 0; x < N; x++)
    {

        temp = A[0];
        A[0] = A[N - 1];
        A[N] = temp;
        cout << A[N];
    }
    return 0;
} /*void cyclicSwap(int *a, int *b, int *c)
 {
     int temp;
     temp = *b;
     *b = *a;
     *a = *c;
     *c = temp;
 }*/