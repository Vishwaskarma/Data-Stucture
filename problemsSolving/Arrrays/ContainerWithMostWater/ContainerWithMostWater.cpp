#include<iostream>
#include<vector>
#include<climits>
using namespace std;



int ContainerWithMostWater(vector<int>height){
    int maxWater=INT_MIN;
    int rp=0,lp=height.size()-1;

    while(rp<lp){
        int width=lp-rp;
        int ht=min(height[lp],height[rp]);
        int currentWater=width*ht;
        maxWater=max(currentWater,maxWater);
        height[lp] < height[rp] ? lp-- : rp++;


    }
    return maxWater;

}


int main(){

    vector<int>height={1,8,6,2,5,4,8,3,7};
    int ans=ContainerWithMostWater(height);
    cout << ans << endl;
    return 0;
}