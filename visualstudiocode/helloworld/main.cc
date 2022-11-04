#include <iostream>
#include <vector>
#include <string>
#include "print.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    //msg.begin();
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int a = 1;
    int b = 3;
    int c = a+b;
    cout << "c=" << c << endl;
    print();
    debug("hello", 688);
}
