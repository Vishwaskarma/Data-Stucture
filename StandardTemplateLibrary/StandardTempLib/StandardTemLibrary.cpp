#include <iostream>
#include <vector>
using namespace std;



void swapNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.emplace_back(6);
    arr.emplace_back(7);

    arr.pop_back();
    vector<int> vec(5, 9);
    vector<int> vec2(vec);

    for (int x : vec)
        cout << "This is first vector" << " " << x << endl;
    for (int y : vec2)
        cout << "This is second Vector which is copied of vec" << " " << y << endl;

    for (int x : arr)
    {
        cout << x;
    }
    vec2.erase(vec2.begin());
    for (int x : vec2)
        cout << "Removing vec2 first elem" << x << endl;
    cout << endl;
    cout << "Vector at idx 3" << arr[3] << "or" << arr.at(3) << endl;
    cout << "vector at front" << arr.front() << endl;
    cout << "Vector at end " << arr.back() << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arr2.erase(arr2.begin() + 1, arr2.begin() + 2);
    arr2.insert(arr2.begin() + 2, 2000);

    // Forward loop through Iterator
    vector<int>::iterator it;
    for (it = arr2.begin(); it != arr2.end(); it++)
    {
        cout << "This printes forward" << *(it) << " ";
    }

    // Backward loop Through terator
    vector<int>::iterator ot;
    for (auto ot = arr2.rbegin(); ot != arr2.rend(); ot++)
    {
        cout << "This printes backward" << " " << *(ot) << " ";
    }

    for (int z : arr2)
    {
        cout << " " << "Array after removing of Elem" << z << endl;
    }

    // Learning passed by reference in cpp

    int a = 20;
    int b = 40;
    cout << "before a is:" << a << endl;

    swapNumbers(a, b);

    cout << "after a is:" << a << endl;

    return 0;
}