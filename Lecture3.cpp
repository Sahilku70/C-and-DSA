/*

Operators:- are used to perform operations on variables and values.

Types of Operators:
            |
            |--Arithmetic Operators ( + , - , * , / , % , ++ , -- )
            |--Relational Operators ( ==, != , > , < , >= , <= )
            |--Logical Operators ( && , || , ! )
            |--Assignment Operators ( = , += , -= , %= )
            |--Bitwise Operators ( ~ , << , >> , | , & , ^ )
            |--Misc Operators
*/

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 3;

    // 1. Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "++a = " << ++a << endl; // pre-increment
    cout << "b-- = " << b-- << endl; // post-decrement

    // Reset values
    a = 10;
    b = 3;

    // 2. Relational Operators
    cout << "\nRelational Operators:\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // 3. Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << endl;
    cout << "(a < 5 || b < 5): " << (a < 5 || b < 5) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    // 4. Assignment Operators
    cout << "\nAssignment Operators:\n";
    int x = 5;
    cout << "x = " << x << endl;
    x += 2; cout << "x += 2 -> " << x << endl;
    x -= 1; cout << "x -= 1 -> " << x << endl;
    x *= 3; cout << "x *= 3 -> " << x << endl;
    x %= 4; cout << "x %= 4 -> " << x << endl;

    // 5. Bitwise Operators
    cout << "\nBitwise Operators:\n";
    int p = 5, q = 2; // binary: 5 = 0101, 2 = 0010
    cout << "p & q = " << (p & q) << endl;   // AND
    cout << "p | q = " << (p | q) << endl;   // OR
    cout << "p ^ q = " << (p ^ q) << endl;   // XOR
    cout << "~p = " << (~p) << endl;         // NOT
    cout << "p << 1 = " << (p << 1) << endl; // Left shift
    cout << "p >> 1 = " << (p >> 1) << endl; // Right shift

    // 6. Misc Operators
    cout << "\nMisc Operators:\n";
    int* ptr = &a; // Address-of (&), Pointer (*)
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value at ptr (*ptr): " << *ptr << endl;

    return 0;
}
