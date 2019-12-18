// Comments start with two forward slashes "//" and end at the end of line...

/*
  Or they can
  span multiple lines
  with this syntax
*/

#include <iostream> // includes the input/output standard library

using namespace std; // all names in the standard library are in
                     // namespace std; this line allows us to
                     // name them directly (e.g. "cout" instead of "std::cout")

int main() { // Main function : all C++ programs start here

    cout << "Hello, World !" << endl; // Prints hello world message to console
    // note the semicolon ; each instrution ends with one of those
    
    return 0; // by convention, a program has to return an error code :
              // 0 means success
    
} // end of the main function = end of the program
