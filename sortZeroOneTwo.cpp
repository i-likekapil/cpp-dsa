
#include "iostream"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void sortZeroOneTwo(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int m = 0;

    while (m <=e) {
        if(arr[m] == 0){
            swap(arr[s++],arr[m++]);
        }
        else if(arr[m] == 1){
            m++;
        }
        else swap(arr[m],arr[e--]);

    }

}

int main(){
int arr[8] = {1,0,2,0,0,2,2,1};
    print(arr,8);
    sortZeroOneTwo(arr,8);
    print(arr,8);
return 0;
}