// reading binary file
#include <iostream>
#include <fstream>
using namespace std;
const char * filename = "py2.dat";
int main () {
    char* buffer;
    long size;
    ifstream file (filename, ios::in|ios::binary|ios::ate);
    size = file.tellg();
    cout << size << endl;
    file.seekg (0, ios::beg);
    buffer = new char [size];
    file.read (buffer, size);
    file.close();
    long* num;
    num = (long*)buffer;
    // cout << *num << endl; // print number
    // cout << buffer[0] << endl; // print string
    cout << "the complete file is in a buffer" << endl;
    delete[] buffer;
    return 0;
}
