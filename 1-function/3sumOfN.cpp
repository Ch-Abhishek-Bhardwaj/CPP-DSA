#include<iostream>
using namespace std;
// sum  till n
int sumN(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
// int main
int main () {
    cout<<sumN(5);
    return 0;
    
}