#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NB_ITER = 1000;

// a function declaration follows this syntax :
/*
<return type> <function name> (
   <argument type> <argument name> [,
   <argument type> <argument name> ...] )
*/
float my_sqrt(float number) {
    float x = number;
    float y = 1.f;
    for (int i(0); i < NB_ITER; ++i) {
        x = (x+y) / 2.f;
        y = number / x;
    }
    return x;
}

// a function can take no arguments ;
// also, it can return no value, in which case we say
// it returns "void"
void print_helloworld() {
    cout << "Hello, World !" << endl;
}

// functions make a copy of the arguments ;
// the modification of a in the body of the function
// will not modify the variable passed as argument
void plus1_wrong(int a) {
    a = a + 1;
}

// here, the argument is a reference :
// the variable passed as argument will be modified
// after the function call
void plus1(int& a) {
    a = a + 1;
}

// function overloading : in C++ (but not in C),
// two functions can share the same name as long as
// they have a different list of arguments
// (a different return value doesn't work)
void plus1(float& a) {
    a = a + 1;
}

// a copy of the array is made : very slow !
void print_slow(vector<int> arr) {
    cout << "{ ";
    for (int elem : arr) {
        cout << elem << ' ';
    }
    cout << '}';
}

// we could use a reference instead, but to make sure
// we don't modify the data inside the function,
// we make a reference to a constant variable :
// this way we can only read the contents but not modify them.
void print_fast(const vector<int>& arr) {
    cout << "{ ";
    for (int elem : arr) {
        cout << elem << ' ';
    }
    cout << '}';
}

// default arguments can be present at the end of the list of arguments
void print_message(const string& message, bool newline = true) {
    cout << message;
    if (newline) {
        cout << endl;
    }
}

// A function has to be declared before the point where it is used ;
// if we want to define (= write the body of the function) below
// the point where we use it, we have to "forward declare" it.
// To do this, we just have to write the signature of the function
// and replace the body with a semicolon
int add(int a, int b);

int main() {
    int a = 0;
    plus1_wrong(a);
    // copy : a still equals 0 here
    plus1(a);
    // reference : a equals 1 now
    
    // add is defined here, so using it is fine
    int sum = add(5, -3);
    cout << sum << endl;
    
    return 0;
}

// definition
int add(int a, int b) {
    return a+b;
}
