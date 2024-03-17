#include <iostream>
#include <cstring>

void sieve(long int n)
{
    bool prime[n-1];
    std::memset(prime, true, sizeof(prime));

    for (long int p = 2; p * p <= n; ++p) {
	if (prime[p]) {
	    for (long int i = p * p; i <= n; i += p) {
		prime[i] = false;
	    }
	}
    }

    // print all prime numbers
    for (long int p = 2; p <= n; ++p)
	if (prime[p])
	    std::cout << p << " ";
    
    std::cout << "\n";
}

int main(int argc, char **argv)
{
    sieve(100);
    return 0;
}
