#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv) {

    bool evidence = true;
    
    short stack = 1; // 16-bit (usually)
    int num = 2;     // 32-bit (usually) or 64-bit
    long longer = 3; // 64-bit (usually) or 128-bit
    unsigned int absolut = 4;

    float root_beer = 3.14;
    double mint_gum = 6.28;

    char izzard = 'A'; // these are stored as numbers, internally
    char mander = ('A' + 1); // this works out to char(66), or 'B'

    int *num_ptr = &num; // & gives the address of the operator. so this is the address of num

    cout << "num: " << num << endl;


    return 0;
}