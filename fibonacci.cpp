#include <bits/stdc++.h>
#include "fibonacci.h"
using namespace std;

unsigned long long Fibonacci::CalculateFibonacci(unsigned int n) {

    if (n < 0){
        throw std::invalid_argument( "received negative value" );
    }
    if (n <= 1) {
        return n;
    }

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long result = 0;

    for (unsigned int i = 2; i <= n; i++) {
        result = a + b;

        if (result < a || result < b) {
            throw std::invalid_argument( "too large value" );
        }

        a = b;
        b = result;
    }

    return result;
}