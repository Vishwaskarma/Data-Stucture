#include <iostream>
#include <vector>
using namespace std;

int NFactorial(int n)
{
    if (n == 0){
        return 1;
    }
    return n * NFactorial(n - 1);
}

int main()
{
    int n = 5;
   cout << NFactorial(5)<<endl ;

    return 0;
}