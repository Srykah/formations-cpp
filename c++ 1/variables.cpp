
int main() {
    /* VARIABLES */
    int a = -42; // integer
    short int b = 0x3f; // small sized integer, with value 63
    char c = 'x'; // a single character
    unsigned long long int d = 10000000000000000ull; // a huge positive integer
    float f = 5.7f; // a low precision "real" number
    double e = 2.718281828459045; // a better precision "real" number
    long double g = 3.141592653589793238462643383279L; // the best precision
    
    int no_init; // no initialization : no_init has a value made of
                 // the bits present in memory before (no signification)
    
    a = 35; // a now equals 35;
    d = b; // d now equals 63 (implicit conversion)
    
    /* OPERATIONS */
    int x = 4 + 3; // x now equals 7;
    int y = a / 5; // y now equals -8 : integer division
    f /= 2.3f; // compound assignment : f now equals 2.47826...
    b++; // increment operator : b now equals 64
    
    /* CONSTANTS : give sensible names to the "magic numbers" of your code ! */
    const int cst = 23;
    // cst = 96; // error
    
    /* REFERENCES : another "name" to refer to the same variable */
    int h = a; // copy
    h = 1; // we change the copy : a still equals 35
    
    int& i = a; // reference (note the ampersand)
    i = 2; // i "references" a, so we're not modifying i here, we're
           // modifying a. Thus, a now equals 2.
    
    // A reference must be initialized at creation, and we cannot change
    // the variable it refers to.
    
    return 0;
}
