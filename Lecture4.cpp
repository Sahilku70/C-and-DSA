//Write a code to find a give number is odd or even......
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a%2==0){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
    return 0;
}


//Write a program to divide people into 3 age groups belwo 12 print child between 12 and 18 print Teenager and above 18 print Adult

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age<12){
        cout<<("Child");
    }else if(age>12 && age<18){
        cout<<"Teenager";
    }else{
        cout<<"Adult";
    }
    return 0;
}

*/

//Write a program to print the day based on the day number...

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch(n){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid day number";
    }

    return 0;
    //hj
}
