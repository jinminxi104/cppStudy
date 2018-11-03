#include <iostream>
#include <string>
using namespace std;
class BaseClass {
    string priValue = "private var in base class";
public:
    string pubValue = "pub var in base class";
protected:
    string protValue = "prot var in base class";

};

class PriSubClass: private BaseClass{
public:
    using BaseClass::pubValue;
    
};

int main(void){

    PriSubClass priSubClass;
    std::cout << priSubClass.pubValue << std::endl;
    return 0;
}
