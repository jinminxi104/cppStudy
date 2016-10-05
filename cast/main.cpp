#include<iostream>
using namespace std;

int main(void){
    long hoge = 1111;
    int* hogehoge = static_cast<int *>(hoge); //NG
    int* hogehoge = reinterpret_cast<int*>(hoge); //OK
	cout << hex << hoge << ':' << hogehoge << endl;
	
	return 0;
}
