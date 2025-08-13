/*
// Print the cube of 3 x 6 size

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}



//print this pattern 
//                       ******
//                       *    *
//                       *    *
//                       ******

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            if(i==1|| i==4 || j==1 || j==6 ){
                cout<<"*";
            }else{
                    cout<<" ";
                }
        
            }
        cout<<endl;
    }
}



//Print triangular pattern upto n number
// *
// **
// ***
// ****.........


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}

//Print triangular pattern upto n number
// ****
// ***
// **
// *

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;                                                           //Not completed
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}