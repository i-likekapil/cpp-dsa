#include "iostream"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void findIntersection(int *a, int *b, int s1, int s2) {
    int i = 0, j = 0;
    int k = max(s1, s2);
    while (i < k) {
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if(a[i] > b[j]) j++;
        else i++;
    }
}

int main() {
    int a[] = {1, 3, 3, 4, 5};
    int b[] = {3, 4, 5};

    findIntersection(a, b, 5, 3);

    return 0;
}