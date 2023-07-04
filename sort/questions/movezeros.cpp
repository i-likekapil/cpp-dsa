#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void moveZeros(vector<int> &v) {
    int i = 0, j = 0; //  i= non zero value
    while (j < v.size()) {
        if (v[j] != 0) {
            swap(v[i++], v[j]);
        }
        j++;
    }
}


int main() {
    vector<int> v = {2, 0, 1, 3, 0, 0, 0};

    print(v);
    moveZeros(v);
    print(v);
    return 0;
}