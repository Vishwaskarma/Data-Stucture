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
        freq[s1[i] -'a']++;
    }

    int windSize = s1.length();

    for(int i=0;i + windSize <= s2.length(); i++){
        int Windfreq[26]={0};
        for(int j = 0; j < windSize; j++){
            Windfreq[s2[i + j] - 'a']++;
        }
        if(isFrequencySame(freq,Windfreq)){
            return true;
        }
    }
    return false;  
}

int main(){
    string s1="ab";
    string s2="awsbasd";
    bool permutation = IsPermutation(s1,s2);
    cout << permutation << endl;
    return 0;
}
