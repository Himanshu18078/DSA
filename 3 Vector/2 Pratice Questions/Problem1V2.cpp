#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(const vector<int>& v, int num)
{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == num)
        {
            return i;
        }
    }
    return -1;
}

vector<int> inputValues()
{
    vector<int> v;
    int size;

    cout << "Please enter the size of the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Element " << i << ": ";
        cin >> num;
        v.push_back(num);
    }

    return v;
}

void printVector(const vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = inputValues();

    printVector(v);

    int num;
    cout << "Please enter the number whose occurrence you want to check: ";
    cin >> num;

    int index = lastOccurrence(v, num);

    if (index != -1)
    {
        cout << "Last occurrence is at index: " << index << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}