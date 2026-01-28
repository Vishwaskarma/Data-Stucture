#include <iostream>
#include <queue>
#include <map>
#include<unordered_map>
#include<set>
using namespace std;

int main()
{
    // priority queue
    priority_queue<int> q;
    q.push(5);
    q.push(4);
    q.push(10);
    q.push(8);
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    cout << endl;

    // Reverse order priority queue
    priority_queue<int, vector<int>, greater<int>> qe;
    qe.push(5);
    qe.push(4);
    qe.push(10);
    qe.push(8);
    while (!qe.empty())
    {
        cout << qe.top() << endl;
        qe.pop();
    }
    cout << endl;

    // notrmal map in cpp

    map<string, int> m;
    m["tv"] = 100;
    m["mobile"] = 10000;
    m["headphone"] = 5000;
    m["tablet"] = 1000;
    m["watch"] = 250;
    m.emplace("camera", 123);
    m.erase("tv");
    if (m.find("camera") != m.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "not found\n";
    }

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    // multimap Examples

    multimap<string, int> mm;

    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.emplace("camera", 123);
    mm.erase("tv");
    if (mm.find("camera") != mm.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "not found\n";
    }

    for (auto p : mm)
    {
        cout << p.first << " " << p.second << endl;
    }
    

    //unordered map in cpp
    unordered_map<string, int> om;
    om.emplace("camera", 123);
    om.emplace("tv", 123);
    om.emplace("phone", 123);
    om.emplace("fruits", 123);
    om.emplace("vegetable", 123);
    


     if (om.find("camera") != om.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "not found\n";
    }

    for (auto p : om)
    {
        cout << p.first << " " << p.second << endl;
    }

    // sets in cpp

    set<int>se;
    se.insert(1);
    se.insert(2);
    se.insert(3);
    se.insert(4);
    se.insert(5);
    se.insert(6);


  bool ans=se.find(6) !=se.end();
  cout <<"ans of set to check exist or not "<<ans << endl;



    cout << se.size() << endl;
    cout << "lower bound = " << *(se.lower_bound(4)) << endl;
     cout << "upper bound = " << *(se.upper_bound(4)) << endl;
    for(auto val:se){
        cout << val << endl;
    }


    //Multiset in cpp
    multiset<int>mse;
    mse.insert(1);
    mse.insert(2);
    mse.insert(3);
    mse.insert(4);
    mse.insert(5);
    mse.insert(6);
    mse.insert(3);




    cout << mse.size() << endl;
    cout << "lower bound = " << *(mse.lower_bound(4)) << endl;
     cout << "upper bound = " << *(mse.upper_bound(4)) << endl;
    for(auto val:mse){
        cout << val << endl;
    }

    return 0;
}
