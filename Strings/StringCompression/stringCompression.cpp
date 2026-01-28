#include <iostream>
#include <vector>
using namespace std;

string stringCompression(string str)
{

    int len = str.length();
    int idx = 0;
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        char ch = str[i];
        while (i < len && str[i] == ch)
        {
            count += 1;
            i++;
        }
        if (count < 2)
            str[idx++] = ch;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char dig : cnt)
            {
                str[idx++] = dig;
            }
        }

        i--;
    }
    str.resize(idx);
    return str;
}
int main()
{
    string input = "aabccc";
    string ans = stringCompression(input);
    cout << ans << endl;
    return 0;
}