#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> num = {1, 3, 4, 2};
    auto it = num.cbegin();
    while(it != num.cend()){
        cout << *it++ << endl;
    }
    return 0;
}

