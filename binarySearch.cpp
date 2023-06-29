#include "iostream"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int binarySearchIter(int *arr, int size, int key) {
    int st = 0;
    int end = size - 1;
    int ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == key) ans = mid;
        if (arr[mid] < key) st = mid + 1;
        else end = mid - 1;
    }
    return ans;
}

int binarySearchRec(int *arr, int size, int key, int start, int end) {
    if (start <= end && start <= size) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) return binarySearchRec(arr, size, key, mid + 1, end);
        if (arr[mid] > key) return binarySearchRec(arr, size, key, start, mid - 1);
    }
    return -1;
}

int binarySearchRec(int *arr, int size, int key) {
    return binarySearchRec(arr, size - 1, key, 0, size - 1);
}

int binarySearchLeftOccurance(int *arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key) start = mid + 1;
        if (arr[mid] > key) end = mid - 1;
    }
    return ans;
}

int binarySearchRightOccurance(int *arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < key) start = mid + 1;
        if (arr[mid] > key) end = mid - 1;
    }
    return ans;
}

int peakIndexInMountainArray(int *arr, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid +1]) start = mid+1;
        else end = mid;

    }
    return start;

}

int pivotInRotatedSortedArray(int *arr, int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start) / 2;
    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearchInRotatedSortedArray(int *arr, int size, int key) {
    int pivot = pivotInRotatedSortedArray(arr, size);
    cout<< " : "<<pivot<<" :"<<endl;
    if (arr[pivot] >= key)
        return binarySearchRec(arr, size, key, pivot, size);
    return binarySearchRec(arr, size, key, 0, pivot);
}

int main() {
//    int arr[5] = {1, 2, 2, 2, 2};
//
//    cout << binarySearchIter(arr, 5, 23) << endl;
//    cout << binarySearchRec(arr, 5, 4) << endl;
//    cout << binarySearchLeftOccurance(arr, 5, 2) << " " << binarySearchRightOccurance(arr, 5, 2) << endl;
//
//    int arrMount[8] = {1, 2, 3, 4, 5, 3, 2, 1};
//    cout << "peak " << peakIndexInMountainArray(arrMount, 8);

//    int arr[5] = {8, 10, 17, 1, 2};
//    cout << "pivot element is " << pivotInRotatedSortedArray(arr, 5);
//    int arr1[5] = {1, 2, 3, 4, 5};
//    cout << "\npivot element is " << pivotInRotatedSortedArray(arr1, 5);

    int arr[7] ={4,5,6,7,0,1,2};
    //int arr[2] ={1,3};
    int key = 0;
    cout<<"element in rotated sorted array at index "<< binarySearchInRotatedSortedArray(arr,7,key);


    return 0;
}