#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void insertionSort(vector<int> &v) {
    // ToDo: understand and write code for insertion sort with theory and dry run
}

int main() {

    vector<int> v = {5, 1, 9, 5, 0, 2, 8};
    print(v);
    insertionSort(v);
    print(v);

    return 0;
}