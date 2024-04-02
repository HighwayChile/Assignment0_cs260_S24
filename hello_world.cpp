// this was from a tutorial at https://code.visualstudio.com/docs/cpp/config-mingw
// was having trouble getting my compiler to work, I kept trying 'gcc'
// what I used in the cmd line with proper form: 'g++ -o helloworld hello_world.cpp'

#include <iostream>


using std::cout;
using std::endl;

int main() {

    cout << "Hello World" << endl;

    // this method is one of many from https://xoax.net/blog/keeping-the-c-console-window-open/
    system("pause");
    return 0;
}