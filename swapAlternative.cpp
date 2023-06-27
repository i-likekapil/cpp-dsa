//
// Created by cavisson on 23/6/23.
//


#include "iostream"

using namespace std;

void swapAlternative(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    print(arr, 6);
    swapAlternative(arr, 6);
    cout << endl;
    print(arr, 6);
    return 0;
}