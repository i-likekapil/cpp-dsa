#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> &v) {
    for (int i: v) cout << i << " ";
    cout << endl;
}

vector<int> merge_sorted_array(vector<int> &v1, vector<int> &v2) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j])
            ans.push_back(v1[i++]);
        else
            ans.push_back(v2[j++]);
    }
    while (i < v1.size())
        ans.push_back(v1[i++]);
    while (j < v2.size())
        ans.push_back(v2[j++]);

    return ans;
}

int main() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6};

    auto ans = merge_sorted_array(v1, v2);
    print(ans);

    return 0;
}