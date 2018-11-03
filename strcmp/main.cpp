#include <iostream>

int strcmp(const char* dst, const char* src){
    while( *src != '\0' && *src == *dst){
        ++src;
        ++dst;
    }

    return *dst - *src;

}

int main(void){
    char a[] = "abcd";
    char b[] = "abcd";
    char c[] = "abd";

    assert(strcmp(a, b) == 0);
    assert(strcmp(c, b) > 0);

    std::cout << "Successed" << std::endl;

    return 0;
}
