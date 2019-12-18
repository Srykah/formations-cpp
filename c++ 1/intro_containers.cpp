#include <array>
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main() {
    /* ARRAY */
    // create a static array of 3 floats
    array<float, 3> floats = { 3.14, 2.718, 5.7 };
    // array indices start at 0
    cout << floats[0] << ", " << floats[3] << endl; // will likely crash !
                                                    // floats[3] doesn't exist !
    /* VECTOR */
    // create a dynamic array of ints
    vector<int> ints; // ints is created empty
    ints.push_back(2); // ints now contains { 2 }
    ints.push_back(4); // ints now contains { 2, 4 }
    cout << ints[1] << endl; // as always, access elements with brackets
    
    /* STRING */
    // at last, a way to store more than a single character !
    string name = "Jean-Pierre";
    cout << name[5] << endl; // will print the character 'P'
    
    /* MAP */
    // dictionaries
    map<string, string> dict;
    dict["elephant"] = "A huge mammal";
    dict["dolphin"] = "Not a fish ! Also a mammal ;-)";
    
    return 0;
}
