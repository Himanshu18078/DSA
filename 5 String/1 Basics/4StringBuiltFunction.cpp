#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Himanshu";

    // length() / size() -> returns number of characters
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;

    // empty() -> checks if string is empty
    cout << "Is Empty: " << s.empty() << endl;

    // at() -> access character with bounds checking
    cout << "at(2): " << s.at(2) << endl;

    // front() -> first character
    cout << "Front: " << s.front() << endl;

    // back() -> last character
    cout << "Back: " << s.back() << endl;

    // append() -> add string at end
    s.append(" Bisht");
    cout << "Append: " << s << endl;

    // push_back() -> add one character
    s.push_back('!');
    cout << "Push Back: " << s << endl;

    // pop_back() -> remove last character
    s.pop_back();
    cout << "Pop Back: " << s << endl;

    // insert() -> insert at position
    s.insert(8, " Kumar");
    cout << "Insert: " << s << endl;

    // erase() -> remove characters
    s.erase(8, 6);
    cout << "Erase: " << s << endl;

    // replace() -> replace part of string
    s.replace(0, 8, "Rahul");
    cout << "Replace: " << s << endl;

    // substr() -> extract substring
    string sub = s.substr(0, 3);
    cout << "Substring: " << sub << endl;

    // find() -> find first occurrence
    cout << "Find 'a': " << s.find('a') << endl;

    // rfind() -> find last occurrence
    cout << "RFind 'a': " << s.rfind('a') << endl;

    // compare() -> compare strings
    string s2 = "Rahul Bisht";
    cout << "Compare: " << s.compare(s2) << endl;

    // clear() -> remove all characters
    string temp = "Hello";
    temp.clear();
    cout << "After Clear: " << temp.size() << endl;

    // swap() -> exchange contents
    string a = "ABC";
    string b = "XYZ";
    a.swap(b);
    cout << "a = " << a << ", b = " << b << endl;

    // capacity() -> current allocated memory
    cout << "Capacity: " << s.capacity() << endl;

    // resize() -> change size
    s.resize(4);
    cout << "Resize: " << s << endl;

    // c_str() -> convert to C-string
    const char* ptr = s.c_str();
    cout << "C String: " << ptr << endl;

    return 0;
}