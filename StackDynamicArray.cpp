#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Array Size";
    cin >> size;

    // Stack dynamic array
    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Stack Dynamic Array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
    return 0;
}
