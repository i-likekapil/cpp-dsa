#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void bubbleSort(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
}

int main() {

    vector<int> v = {5, 1, 9, 5, 0, 2, 8};
    print(v);
    bubbleSort(v);
    print(v);

    return 0;
}