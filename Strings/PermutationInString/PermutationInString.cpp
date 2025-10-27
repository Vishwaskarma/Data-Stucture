#include<iostream>
#include<vector>
using namespace std;

bool isFrequencySame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool IsPermutation(string s1,string s2){
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        int Idx=s1[i]-'a';
        freq[s1[i] -'a']++;
    }
    int windSize=s1.length();
    for(int i=0;i<s2.length(); i++){
        int windIdx=0,idx=i;
        int Windfreq[26]={0};
        while(windIdx < windSize && idx < s2.length()){
            Windfreq[s2[idx]-'a']++;
            windIdx++;idx++;

        }
        if(isFrequencySame(freq,Windfreq)){
            return true;

        }
        return false;
    }

}

int main(){
    string s1="ab";
    string s2="awsbasd";
    bool permutation= IsPermutation(s1,s2);
    cout << permutation << endl;
    return 0;
}



