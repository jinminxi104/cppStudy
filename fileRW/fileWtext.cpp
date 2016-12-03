// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;
int main () {
ofstream examplefile ("example.txt");
if (examplefile.is_open()) {
examplefile << "This is a line.\n";
examplefile << "This is another line.\n";
examplefile.close();
}
return 0;
}
