//
// Created by cavisson on 23/6/23.
//

#include "iostream"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void moveZeros(int arr[], int n) {
    int i = 0;
    int j = n - 1;
    for (int k = 0; k < n; k++) {
        if (arr[k] == 1) {
            i = k;
            break;
        }
    }
    for (int k = n-1; k > 0; k--) {
        if (arr[k] == 0) {
            j = k;
            break;
        }
    }

    while (i < j) {
        if(arr[i] == 1){
            swap(arr[i++],arr[j--]);
        }
        else i++;

    }

}


int main() {

    int arr[] = {1, 1, 1, 1, 1, 1, 1};
    print(arr, 7);
    moveZeros(arr, 7);
    print(arr, 7);
    int arr1[] = {1, 0, 1, 1, 0, 1, 1};
    print(arr1, 7);
    moveZeros(arr1, 7);
    print(arr1, 7);

    return 0;
}
