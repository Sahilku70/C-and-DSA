/*

C++ Vector:- a vector in C++ is like a resizable array.

Both vectors and arrays are data structures used to store multiple elements of the same data type.

The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). 
A vector however, can grow or shrink in size as needed.

*/

// Include the vector library
// #include <vector>
// declaration:---               vector<data_type> variable_name;

#include <vector>
#include<iostream>
using namespace std;
int main(){

// Print vector elements
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
for (string car : cars) {
  cout << car << " ";
}


// Note: The type of the vector (string in our example) cannot be changed after its been declared.
// One advantage of using the vector library, is that it includes many useful functions. 
// For example, you can access the first or the last element of a vector with the .front() and .back() functions:
cout << cars.front()<<endl;
cout << cars.back()<<endl;

cout << cars.at(1)<<endl;           // To access an element at a specified index, you can use the .at() function and specify the index number.

// Get the third element
cout << cars.at(2)<<endl;           // For example if the element is out of range:


// cout << cars.at(6);                 // Try to access an element that does not exist (throws an error message)


cars[0] = "Opel";                   // To change the value of a specific element, you can refer to the index number:
cout << cars[0]<<endl;                   // Now outputs Opel instead of Volvo



// The biggest difference between a vector and an array is that vectors can grow dynamically. That means you can add or remove elements from the vector.
// To add an element to the vector, you can use the .push_back() function, which will add an element at the end of the vector:


cars.push_back("Tesla");
               //You can add as many elements as you want:

cars.push_back("Tesla");
cars.push_back("VW");
cars.push_back("Mitsubishi");
cars.push_back("Mini");

for (string car : cars) {
  cout << car << " ";
}
cout<<endl;

// Remove Vector Elements
// To remove an element from the vector, you can use the .pop_back() function, which removes an element from the end of the vector:
cars.pop_back();
for (string car : cars) {
  cout << car << " ";
}
cout<<endl;
// Vector Size:- To find out how many elements a vector has, use the .size() function:
cout << cars.size()<<endl;  

cout<< cars.capacity()<<endl;         //for capacity

// Check if a Vector is Empty:- There is also a function to find out whether a vector is empty or not.
// The .empty() function returns 1 (true) if the vector is empty and 0 (false) if it contains one or more elements:

vector<string> ca;
cout << ca.empty()<<endl;  
cout << cars.empty()<<endl;  // Outputs 0 (not empty)


return 0;
}