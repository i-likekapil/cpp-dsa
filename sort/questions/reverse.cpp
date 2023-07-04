#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void reverse(vector<int> &v) {
    int s = 0, e = v.size() - 1;
    while (s <= e)
        swap(v[s++], v[e--]);
}

void reverse(vector<int> &v, int m) {
    int s = m + 1, e = v.size() - 1;
    while (s <= e)
        swap(v[s++], v[e--]);

}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    print(v);
    reverse(v);
    print(v);
    return 0;
}