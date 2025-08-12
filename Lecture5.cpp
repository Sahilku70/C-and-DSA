/*
//Print the first multiple of 5 which is also a multiple of 7...
#include<iostream>
using namespace std;
int main(){

    int i=5;
    while(true){
        if(i%7==0){
            cout<<i;
            break;
        }
        i+=5;
    }

    cout<<endl;

    for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i;
            break;
        }
    }

    return 0;
}


//Print the sum of the stream of N integers in the input.....

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the numbers: ";
    int sum=0,n;
    for(int i=0;i<5;i++){
        cin>>n;
        sum+=n;
    }
    cout<<sum;
    return 0;
}

*/

//Print all the values between 1 and 50 except for the multiple of 3..
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=50;i++){
        if(i%3!=0){
            cout<<i<<" ";

        }else{
            continue;
        }
    }
    return 0;
}