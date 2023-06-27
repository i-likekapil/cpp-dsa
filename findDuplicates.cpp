//
// Created by cavisson on 23/6/23.
//

#include "iostream"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout<<endl;
}

int findDup(int arr[], int n){
    int sum =0;
    //xor all array
    for (int i = 0; i < n; i++) sum =sum ^ arr[i];
    //xor 1 to n-1;
    for (int i = 1; i < n; i++) sum =sum ^ i;
    return sum;
}
// 422 leetcode
int main(){
    int arr[] = {1,2,3,4,4}; // find duplicate
    cout<<findDup(arr,5);

return 0;
}