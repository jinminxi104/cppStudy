#include<iostream>
using namespace std;

int main(void){
    int i = 1;
	int *j;
	j = &i;

	void* p = j;

	cout << i << endl;
	cout << p << endl;
	cout << hex << (unsigned long)p - 1 << endl;
	
	return 0;
}
