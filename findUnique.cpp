//
// Created by cavisson on 23/6/23.
//
#include "iostream"

using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i]; // 5 ^ 5 = 0 that's why we can xor all elements to find unique element
    }
    return ans;
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,1,2,3};
    print(arr,7);
    cout<<"unique element is "<<findUnique(arr,7)<<endl;

return 0;
}