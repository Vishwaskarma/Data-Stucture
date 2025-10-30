#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isFrequencySame(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}


bool IsPermutation(string s1, string s2) {
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }

    int windowSize = s1.length();

    for (int i = 0; i <= s2.length() - windowSize; i++) {
        int Windfreq[26] = {0};
        for (int j = 0; j < windowSize; j++) {
            Windfreq[s2[i + j] - 'a']++;
        }

        if (isFrequencySame(freq, Windfreq)) {
            return true;
        }
    }
    return false;
}
//Optimized way 

bool CheckPermutation(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();

    if (n2 < n1) return false;

    vector<int> count1(26, 0);
    vector<int> count2(26, 0);

    for (int i = 0; i < n1; i++) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }

    if (count1 == count2) return true;

    
    for (int i = n1; i < n2; i++) {
        count2[s2[i] - 'a']++;              
        count2[s2[i - n1] - 'a']--;        
        if (count1 == count2) return true;
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "awsbasd";

    bool permutation = IsPermutation(s1, s2);
    bool ans = CheckPermutation(s1, s2);

    cout << "Brute force result: " << permutation << endl;
    cout << "Optimized result: " << ans << endl;

    return 0;
}
