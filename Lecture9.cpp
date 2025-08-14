/*

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
Arrays have contiguous memory.

Syntax:---- 
           data_types array_name [array_size];


        ex:-    int arr[5];
                int arr[] = {1,2,3,4,5,};

Types of array:------------------------
                                       |
                                       |
            |----------------------------------------------------|
            |                                                    |
            |                                                    |
    Single Dimensional /                               Multidimensional array
    One- Dimensional array


//Calculate the sum of all the elements in the  array.

#include<iostream>
using namespace std;
int main(){
    int arr[]= {3,4,10,11};
    int sum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}


//Find the maximum value out of all the elements in the array.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,7,18,9,11};
    int max=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}

*/

