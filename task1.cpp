#include <iostream>
#include <math.h>

using namespace std;


int index(int a[], int b, int n) {
    for (int i = 0; i < b; i++) {
        if (a[i] == n) {
            return i;
        }
    }
    return -1;
}


int main()
{
    int b = 8;
    int* a = new int[b];

    for (int i = 0; i < b; i++) {
        a[i] = rand() % 10;
    }
    for (int i = 0; i < b; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Index: " << index(a, b, 3);

    return 0;
}