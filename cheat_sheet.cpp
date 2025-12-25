#include<bits/stdc++.h>

using namespace std;

void string_header() {
        string s1 = "hello";
        string s2 = s1; // copy

        s1 += " world"; // concatenation
        int len = s1.length();

        char first = s1[0];
        char last  = s1[len - 1];
        char last1 = s1.back();

        size_t pos = s1.find("world");
        if (pos != string::npos) {
                cout << pos << endl;
        }

        string sub = s1.substr(6, 5);
        cout << sub << endl;
}

void sstream_header(){
        string line = "This is a file reviewing the headers.";
        stringstream ss(line);
        string word;
        while (ss >> word) {
                cout << word << endl;
        }

        stringstream ss1;
        int num = 123;
        ss1 << num;
        string str = ss1.str();
}

void list_header() {
        list<int> myList;
        myList.push_front(10);
        myList.push_back(20);
        myList.push_back(30);
        for (int val : myList) {
                cout << val << " ";
        }
        myList.pop_back();
        myList.pop_front();
        for (int val : myList) {
                cout << val << " ";
        } 
        myList.push_front(30);
        myList.sort();
        myList.reverse();
        for (int val : myList) {
                cout << val << " ";
        }
}

void algorithm_header() {
        vector<int> v = {3, 1, 2};
        sort(v.begin(), v.end()); // 升序
        // 降序：sort(v.rbegin(), v.rend());
        string s = "abc";
        reverse(s.begin(), s.end());
        vector<int> v1 = {1, 2, 3};
        auto it = find(v1.begin(), v1.end(), 2);
        if (it != v.end()) { // 找到了
        // ...
        }
        int smallest = min(10, 20);
        int a = 0, b = 1;
        swap(a, b);
}

int main(){
        cout << "foobar" << endl;
        list_header();
        string_header();
        algorithm_header();
        sstream_header();
}
