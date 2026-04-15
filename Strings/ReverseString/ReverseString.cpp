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




string ReverseStringSec(string s = "Himanshu")
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {                      
        char ch=s[start];
        s[start]=s[end];
        s[end]=ch;

        start++;
        end--;
    }
    return s;
}





int main()
{
    cout << ReverseString() << endl;
    cout <<"this is third value approach"<<" "<< ReverseStringSec() << endl;
    return 0;
}




