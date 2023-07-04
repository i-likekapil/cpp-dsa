#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

void selectionSort(vector<int> &v){
for(int i=0;i<v.size();i++){
    int m = i;
    for(int j=i+1;j<v.size();j++){
        if(v[m]>v[j]) m = j;
    }
    swap(v[i],v[m]);
}
}

int main(){

    vector<int> v = {1,4,12,8,0,33,23};
    print(v);
    selectionSort(v);
    print(v);

return 0;
}