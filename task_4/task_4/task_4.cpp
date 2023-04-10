#include <iostream>
using namespace std;

int main(){
    int A[10];
    int B[10];

    srand(time(0));
    for (int i = 0; i < 10; i++) {
        A[i] = rand() % 10;
        B[i] = rand() % 10;
        cout << A[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }

    int X[20];

    for (int i = 0; i < 10; i++) {
            X[i*2] = A[i];
            X[i * 2 + 1] = B[i];

        }

    cout << endl;

    for (int i = 0; i < 20; i++) {
        cout << X[i]<<" ";
    }


    for (int i = 0; i < 10; i++) {
        X[i] = A[i];
        X[i + 10] = B[i];
    }

    cout << endl;
    for (int i = 0; i < 20; i++) {
        cout << X[i] << " ";
    }
}