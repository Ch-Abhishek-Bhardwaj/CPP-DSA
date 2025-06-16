#include<iostream>
using namespace std;
//Sum fn
int sum(int a, int b){
    int s = a+b;
    return s;
} 
int minOfTwo(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main() {
    // cout<<sum(15,8);
    cout<< "Min is :- "<<minOfTwo(13,5);
    return 0;

}