#include <iostream>
//#include <armadillo>

using namespace std;
using namespace arma;

//Declare function before main
//f.ex
void func(int, int*):
int main()
{
    int a;
    int *b;
    a = 10;
    b = new int[10];
    for (int i = 0; i < 10; i++) {
        b[i] = i;
        cout << b[i] << endl;
    }
    return 0;
}
// The variable a is transferred by call by value.
//This means that the function func cannot change a in the calling function
func(a,b);

delete [] b;

// Call by value -
// Call by reference - Have a value that you can change using pointers and &

// Use armadillo for linear algebra.
