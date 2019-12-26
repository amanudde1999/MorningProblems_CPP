#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// given a positive integer n <= 4,000,000 this returns the smallest
// integer d such that d*d > n
//
// not needed to solve the problem, but some might find it helpful
unsigned int upper_sqrt(unsigned int n) {
    unsigned int d = sqrt((double) n);

    // should iterate at most once or twice
    while (d*d <= n) {
        ++d;
    }

    return d;
}
    
          

int main() {
    unsigned int n = 0;
    cin >> n;
    if (n ==1 ){
        cout << "not prime ";
        return 0;
    }
    double a = floor(sqrt(n));
    unsigned int b = 0;
    for (unsigned int i=2; i<=a;i++){
        if (n%i == 0){
            b++;
        }
    }
    if (b!=0){
        cout << "not prime ";
        return 0;
    }
    
    if (b==0){
        cout << "prime ";
        return 0;
    }
    // read in the integer
    // NOTE: look *carefully* at the maximum value of the number
    // in the problem description


    // determine if the integer is prime
    // good luck and remember that composite numbers are for chumps :)


    // print the answer
    

    return 0;
}
