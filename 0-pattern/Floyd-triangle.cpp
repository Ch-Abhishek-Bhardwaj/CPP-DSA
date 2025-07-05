#include<iostream>
using namespace std;
int main() {
    int num=1;
    int n;
    cout<<"Enter the value of num:-";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;
        j++){
           cout<<num;

            num++;
        }
        cout<<endl;
    }
}