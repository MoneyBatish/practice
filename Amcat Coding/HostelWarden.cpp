#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;
    
    std::string S;
    std::cin >> S;
    
    std::vector<char> primes;
    std::vector<char> composites;
    std::vector<char> others;
    
    for (char student : S) {
        if (isPrime(static_cast<int>(student))) {
            primes.push_back(student);
        }
        else if (isalpha(student)) {
            composites.push_back(student);
        }
        else {
            others.push_back(student);
        }
    }
    
    std::sort(primes.begin(), primes.end());
    std::sort(composites.rbegin(), composites.rend());
    
    std::vector<char> result;
    result.insert(result.end(), primes.begin(), primes.end());
    result.insert(result.end(), composites.begin(), composites.end());
    result.insert(result.end(), others.begin(), others.end());
    
    for (char student : result) {
        std::cout << student;
    }
    
    return 0;
}
