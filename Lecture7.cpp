//Conversion of Binary to Decimal..

#include<iostream>
using namespace std;
int main(){
    int n,ans=0,power=1;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>0){
        int last = n%10;
        ans = ans + last*power;
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}
