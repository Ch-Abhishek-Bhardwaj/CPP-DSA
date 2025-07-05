// //Square pattern
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter the value of n :-";
//     cin>> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    char ctr='A';
    cout<<"Enter the value of N :- ";
    cin>> n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<<ctr<<" ";
            ctr++;
        }
        cout<<endl;
    }  
    return 0;
}