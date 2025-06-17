#include<iostream>
using namespace std;

int deciToBinary(int deciNum){
    int ans=0, pow=1;
    while(deciNum>0){
    int rem = deciNum%2;
    deciNum/=2;
    ans += (rem*pow);
    pow *=10;
    }
    return ans;
}

int main(){
    int deciNum=50;
    cout<<deciToBinary(deciNum)<<endl;
    return 0;
}
