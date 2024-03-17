#include <iostream>

void solution()
{
    long int n { 600851475143 };
    long int i { 2 };

    while (i * i < n) {
	while (n % i == 0) {
	    n /= i;
	}
	++i;
    }
    
    std::cout << n << "\n";
}

int main(int argc, char **argv)
{
    solution();
    return 0;
}
