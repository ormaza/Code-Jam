#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");

    int a;
    while(in>>a)
    {
        out<<"alo";
    }
    return 0;
}
