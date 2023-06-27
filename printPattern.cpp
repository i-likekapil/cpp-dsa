//
// Created by cavisson on 23/6/23.
//

#include "iostream"

void print1(int n);
void print2(int n);

using namespace std;

int main() {
    /*cout << "enter n \n";
    int n;
    cin >> n;
    cout << "n is " << n;*/
    // print1(3);
    // print2(3);
    return 0;
}

void print1(int n) {
    int row = 0;
    while (row < n) {
        int col = 0;
        while (col < n - row) {
            cout << "*";
            col++;
        }
        cout << "\n";
        row++;
    }
}

void print2(int n) {
    int row = 0;
    while (row < n) {
        int col = 0;
        while (col < n - row) {
            cout << row;
            col++;
        }
        cout << "\n";
        row++;
    }
}
