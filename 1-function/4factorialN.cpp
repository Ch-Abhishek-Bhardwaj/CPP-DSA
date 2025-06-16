#include<iostream>
using namespace std;
// Fact fn
int Factorial(int n){
    int fact=1;

    for (int i = 1; i<=n; i++)
    {
        fact*=i;        
    }
    return fact;
}

int main (){
    cout<<Factorial(5);
    return 0;
}