 #include<iostream>
 using namespace std;

 int binaryToDecimal(int num){
    int ans =0 ,pow =1;
    while(num>0)
    {
        int rem =num%10;
        
        ans=(rem*pow);
        pow*=2;

    }
    return ans;
    
 }

 int main(){
    int binary=10;
    cout<< binaryToDecimal(binary)<<endl;
    return 0;

 }