#include <iostream>

using ull = unsigned long long;

const ull MOD = 1e9 + 7;

ull binpow(ull a, ull n) {
    ull res = 1;
    while (n) {
        if (n & 1) {
            res = (res * a); // % MOD;
        }
        a = (a * a); // % MOD;
        n >>= 1;
    } 
    return res;
}

int main() {
    ull a, n;
    std::cin >> a >> n;
    std::cout << binpow(a, n) << std::endl;
    return 0;
}