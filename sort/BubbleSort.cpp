#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void bubbleSort(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j + 1], v[j]);
            }
            print(v);
        }
        cout << endl;
    }
}

int main() {

    vector<int> v = {10,1,7,6,14,9};
    print(v);
    bubbleSort(v);
    print(v);

    return 0;
}