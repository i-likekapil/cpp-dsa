#include "iostream"

#include "bits/stdc++.h"

using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {

    array<int, 4> ar = {1, 2, 3, 4}; // exact same as int arr[4]


    vector<int> v; // same as java ArrayList
    v.push_back(1); // insert
    v.capacity(); // capacity of a vector
    v.size(); // no. of element in vector

    // vector with some size and initial values of whole vector

    vector<int> av(5, 1);

    // print av to verify



    // deque
    // insert and deletion at end start and end
    // random access possible
    // dynamic size

    deque<int> d;

    d.push_back(1); // start
    d.push_front(2); // end
    for (int x: d) cout << x << " ";
    d.pop_back();
    for (int x: d) cout << x << " ";
    d.pop_front();
    for (int x: d) cout << x << " ";
// access element by index
    cout << d[0]; // d.at(0)

    d.front();
    d.end();
    d.size();
    d.erase(d.begin(), d.begin() + 1); // give range

    d.max_size(); // initial size , but never change
    cout << endl << "List " << endl;
    // list <- doubly linked list
    // random access not possible
    // list.h

    list<int> l;

    l.push_back(1);
    l.push_front(2);
    for (int x: l) cout << x << " ";
    cout << endl;
    l.erase(l.begin());
    for (int x: l) cout << x << " ";
    cout << endl;

// copy a list
    list<int> n(l);

// with size and initial elemnt
    list<int> ll(5, 100);

    //stack
    //stack.h
    //FILO

    stack<string> st;

    st.push("kapil");
    st.push("rahul");
    st.push("tushar");

    cout << endl << "Stack " << endl;

    cout << st.top() << endl;
    st.pop();
    st.size();
    st.empty();
    cout << st.top() << endl;

// 0 -> false
// 1 -> true

// queue
// queue.h
//FIFO
    cout << endl << "Queue" << endl;

    queue<string> queue;

    queue.push("A");
    queue.push("B");
    queue.push("C");
    queue.push("D");

    cout << queue.front() << endl;
    queue.pop();
    queue.size();
    queue.empty();

    cout << queue.front() << endl;

    //priority queue
    // maximum element is always at top or 0 index


    cout << endl << "Priority Queue" << endl;
    priority_queue<int> pq; // based on max heap

    priority_queue<int, vector<int>, greater<int>> minQu;  // based on min heap

    pq.push(1);
    pq.push(89);
    pq.push(2);

    minQu.push(1);
    minQu.push(89);
    minQu.push(2);

    unsigned long i1 = pq.size();
    for (int i = 0; i < i1; i++) {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << " ----------------- " << endl;
    unsigned long i2 = minQu.size();
    for (int i = 0; i < i2; i++) {
        cout << minQu.top() << endl;
        minQu.pop();
    }

    // SET
    // set.h
    // unique elements
    // based on bst
    // types - set, unordered_set

    cout << endl << "SET" << endl;
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    for (auto i: s) cout << i << " ";
    //s.erase(s.begin());
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << endl;
    for (auto i: s) cout << i << " ";
    cout << endl << s.count(5); // same as java contains
    cout << endl << s.count(-1); // same as java contains

    set<int>::iterator itrr = s.find(5); // return index of 5 // print value *it // return ref


    // map k,v
    // unique keys may have same values

    cout << endl << "MAP" << endl;

    map<int, string> mp; // sorted order , rb tree

    mp[0] = "kapil";
    mp[4] = "kaushik";
    mp[2] = "yahoo";
    mp.insert({14, "google"});

    for (pair<int, string> i: mp) {
        cout << i.first << " "; // point to key
        cout << i.second << " ";// point to value
    }
    cout << "\n";
    unordered_map<int, string> ump; // random order, hashtable

    ump[0] = "kapil";
    ump[4] = "kaushik";
    ump[2] = "yahoo";
    ump.insert({14, "google"});

    for (pair<int, string> i: ump) {
        cout << i.first << " "; // point to key
        cout << i.second << " ";// point to value
    }

    // algorithm
    // algorithm.h
    // some basic func
    cout << endl << "ALGO" << endl;
    vector<int> bb;
    bb.push_back(3);
    bb.push_back(4);
    bb.push_back(7);
    bb.push_back(9);
    // only for yes or not
    cout << binary_search(bb.begin(), bb.end(), 6) << endl;
    cout << binary_search(bb.begin(), bb.end(), 7) << endl;

    // index

    cout << lower_bound(bb.begin(), bb.end(), 7) - bb.begin() << endl;
    cout << upper_bound(bb.begin(), bb.end(), 7) - bb.begin() << endl;
    cout << max(1, 2) << endl;
    cout << min(1, 2) << endl;
//swap(a,b)
    string a = "abcd";

    cout << a << endl;
    reverse(a.begin(), a.end());
    cout << a << endl;

    for (auto x: bb) cout << x << " ";
    rotate(bb.begin(), bb.begin() + 1, bb.end());
    cout << endl;
    for (auto x: bb) cout << x << " ";
    sort(bb.begin(), bb.end()); // intro sort  -> quick heap & insertion sort based
    cout << endl;
    for (auto x: bb) cout << x << " ";
    return 0;
}