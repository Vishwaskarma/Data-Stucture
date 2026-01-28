#include<iostream>
#include<vector>
using namespace std;


//Print all prime number from 1 to 50
int SieveOfEratosThenes(int n=50){
    vector<bool>isPrime(n+1,true);
    int count=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2;j<n;j=j+=i){
                isPrime[j]=false;
            }

        }
    }
    return count;

}



int main(){
    int ans=SieveOfEratosThenes();
    cout <<"The total number of prime numbe is : " << ans << endl;

    
    return 0;
}

