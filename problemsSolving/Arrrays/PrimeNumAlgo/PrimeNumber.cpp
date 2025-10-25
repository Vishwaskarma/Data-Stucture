#include<iostream>
#include<vector>
#include<cmath>
using namespace  std;

void FindRangeOfPrime(int start,int end){
    vector<int>arr={};
    for(int num=start;num<=end;num++){
        if(num<=2)continue;
        bool isPrime=true;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                isPrime=false;
                break;
            }

        }
        if(isPrime){
            arr.push_back(num);

        }
    }
    
    for(int p:arr){
        cout << p <<endl;
    }
}
void FindPrimeWithoutRange(int num){
    if (num>2){

        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                cout << "Num is not Divided by : " << i <<endl;
            }
            if(num%i !=0){
                cout << "Num is Divisible By : " << i<< endl;
            }
            
        }
    }

}

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
    int start=2;
    int end=100;
    FindRangeOfPrime(start,end);
    int num=13;
    FindPrimeWithoutRange(num);

    int ans=SieveOfEratosThenes();
    cout <<"The total number of prime numbe is : " << ans << endl;
     return 0;

}