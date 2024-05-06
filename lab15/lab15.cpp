#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int size = 20;
    int a[size], b[size];


    cout << "Enter " << size << " integer numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }


    int b_size = 0;
    for (int i = 0; i < size; ++i) {
        if (a[i] < 0) {
            b[b_size] = a[i];
            b_size++;
        }
    }


    sort(b, b + b_size);


    cout << "Sorted array of negative elements from array a:" << endl;
    for (int i = 0; i < b_size; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
