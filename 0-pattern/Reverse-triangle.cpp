#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "enter the value of N:- ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}