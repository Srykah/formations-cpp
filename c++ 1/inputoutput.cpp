#include <iostream>

using namespace std;

int main() {
    int integer;
    char character;
    float realNumber;
    
    cout << "Enter an integer (end with enter) : ";
    cin >> integer;
    cout << "Enter a single character : ";
    cin >> character;
    cout << "Enter a real number : ";
    cin >> realNumber;
    
    cout << "You've entered : "
         << integer << ", "
         << character << ", "
         << realNumber << endl;
         
    return 0;
}
