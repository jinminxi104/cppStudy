#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void){
    int a = 1;
    int b = 2;

    int tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);


    int&& aaa = 6;
    int&& aa = std::move(aaa);

    std::cout << aa << std::endl;
    std::cout << b << std::endl;
    return 0;
}
