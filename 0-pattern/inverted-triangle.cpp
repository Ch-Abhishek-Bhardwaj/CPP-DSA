// #include<iostream>
// using namespace std;
// int main() {
//     int n=4;
//     for(int i=0;i<n;i++){
//         // spaces
//         for (int j=0;j<i;j++){
//             cout<<" ";
//         }
//         //nums
//         for(int k=0;k<n-i;k++){
//             cout<<i+1;
//         }
//         cout<<endl;

//     }
// }
// character version;
#include<iostream>
using namespace std;
int main() {
    int n=4;
    char ch ='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        for(int k=0;k<n-i;k++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}