#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void insertionSort(vector<int> &v) {
    int key,j;
    for(int i=0;i<v.size();i++){
        key = v[i];
        j= i-1;
        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main() {

    vector<int> v = {5, 1, 9, 5, 0, 2, 8};
    print(v);
    insertionSort(v);
    print(v);

    return 0;
}