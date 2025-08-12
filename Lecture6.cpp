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

*/

//print this pattern 
//                       ******
//                       *    *
//                       *    *
//                       ******

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(i==0){
                cout<<" * ";
            }else if(i==1){
                if(i==1 || i==5){
                    cout<<" * ";
                }else{
                    continue;
                }
            }else if(i==2){
                if(i==2 || i==5){
                    cout<<" * ";
                }else{
                    continue;
                }
            }else if(i==3){
                if(i==3 || i==5){
                    cout<<" * ";
                }else{
                    continue;
                }
            }
        }
        cout<<endl;
    }
}