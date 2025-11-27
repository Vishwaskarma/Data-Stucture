#include <iostream>
#include <list>
#include<deque>
#include<vector>
#include<stack>

using namespace std;

int main()
{
    //Initialization of list in cpp
    list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    list.pop_back();
    list.pop_front();

    //Initializing Deque in cpp
    for (int x : list) cout << x << endl;
    deque<int>dq={1,2,3};

    //Initialization of pair in cpp
    pair<char,int>p={'a',1};
    cout << p.first << endl;
    cout << p.second << endl;
    // pair of pair in cpp
    pair<string,pair<string,int>>p2={"Himanshu",{"age",24}};
    cout << p2.first <<  endl;
    cout << p2.second.second << endl;

    //pair of vector
    vector<pair<int,int>> ve={{1,2},{2,3},{3,4},{4,5}};
    ve.push_back({5,6});
    ve.push_back({6,7});
    ve.push_back({7,8});
    ve.emplace_back(8,9);
    for(pair<int,int>p:ve)cout<< p.first << " " << p.second << endl;

   //stack 
   stack<int>st;
   st.push(1);
   st.push(2);
   st.push(3);
   while(!st.empty()){
    cout << st.top() << " ";
    st.pop();


   }
   cout << st.size() << endl ;
   cout << endl;


    return 0;
}