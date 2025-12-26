#include<bits/stdc++.h>

using namespace std;

void string_header() {
        cout << "\n--- <string> Demo ---" << endl;
        string s1 = "hello";
        s1 += " world"; // combine the string.

        cout << "Original: " << s1 << endl;
        cout << "Length: " << s1.length() << endl;

        size_t pos = s1.find("world");
        if (pos != string::npos) {// find the sub string.
                cout << "Found 'world' at index: " << pos << endl;
        }

        string sub = s1.substr(6, 5);//print the sub string.
        cout << "Substring: " << sub << endl;
}

void sstream_header() {
        cout << "\n--- <sstream> Demo ---" << endl;
        string line = "This is a reviewing headers.";
        stringstream ss(line);
        string word;
    
        cout << "Splitting string: \"" << line << "\"" << endl;
        while (ss >> word) { // these codes divides a string into words without spaces.
                cout << "  Word: " << word << endl;
        }
}

void list_header() {
        cout << "\n--- <list> Demo ---" << endl;
        list<int> myList;
        myList.push_front(10); // [10]
        myList.push_back(20);  // [10, 20]
        myList.push_back(30);  // [10, 20, 30]
    
        cout << "Initial: ";
        for (int val : myList) cout << val << " ";// this is a line output the list.
        cout << endl;

        myList.pop_back(); // [10, 20]
        myList.pop_front(); // [20]
    
        cout << "After pop: ";
        for (int val : myList) cout << val << " ";
        cout << endl;
    
        myList.push_front(30); // [30, 20]
        myList.push_front(10); // [10, 30, 20]
        myList.sort();         // [10, 20, 30]
    
        cout << "Sorted: ";
        for (int val : myList) cout << val << " ";
        cout << endl;
}

void algorithm_header() {
        cout << "\n--- <algorithm> Demo ---" << endl;
        vector<int> v = {3, 1, 2};
        sort(v.begin(), v.end());
        cout << "Sorted vector: ";
        for(int val : v) cout << val << " ";
        cout << endl;

        string s = "abc";
        reverse(s.begin(), s.end());
        cout << "Reversed string: " << s << endl;

        int a = 10, b = 20;
        swap(a, b);
        cout << "Swapped values: a=" << a << ", b=" << b << endl;
}

int main(){
        list_header();
        string_header();
        algorithm_header();
        sstream_header();
}
