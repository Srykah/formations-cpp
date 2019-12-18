#include <iostream>

using namespace std;

int main() {
    /* BOOLEANS : can only store "true" of "false" */
    bool flag = true;
    bool empty = false;
    
    int x = 4, y = -5;
    
    // they're the result of boolean operations :
    bool b1 = (true && false); // AND
    bool b2 = (true || false); // OR
    bool b3 = !b2; // NOT
    bool b4 = (x == y); // EQUALITY
    bool b5 = (x != y); // INEQUALITY
    bool b6 = (x > y); // comparisons (also >=, <, <=)
    
    /* CONDITIONS */
    int age = 20;
    if (age > 0 && age < 18) {
        cout << "You are underage" << endl;
    } else if (age < 120) {
        cout << "You can drive a car ! (if you have a licence)" << endl;
    } else {
        cout << "You are lying !" << endl;
    }
    
    bool hasLicence = true;
    if (!hasLicence) { // you can use booleans directly
        cout << "You can't drive without a licence !" << endl;
    }
    
    /* LOOPS */
    // while
    // condition is checked before each iteration
    bool stop = false;
    bool userStops, readyToClose; /* example */
    while (!stop) {
        if (userStops && readyToClose) {
            stop = true;
        }
    }
    
    // for (init; cond; update) { ... }
    /* roughly equivalent to :
        init;
        while (cond) {
            ...
            update;
        }
    */
    int N = 20;
    for (int i(0); i < N; ++i) {
        cout << i << ' ';
    }
    
    // do...while
    // condition is checked at the end, so contents
    // are always executed at least once
    do {
        cout << "print once" << endl;
    } while (false); // note the semicolon here
    
    return 0;
}
