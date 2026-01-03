#include <iostream>
#include <string>
using namespace std;

string ReverseString(string s = "Himanshu")
{
    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

int main()
{
    cout << ReverseString() << endl;

    return 0;
}
