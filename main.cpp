#include <iostream>

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b
int gcd(const int a, const int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}