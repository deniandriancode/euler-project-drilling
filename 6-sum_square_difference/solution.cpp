#include <iostream>
#include <cmath> // pow
#include <cstdlib> // abs

long int sum_of_square(int n)
{
    long int s { 0 };
    for (int i = 1; i < n+1; ++i) {
	s += pow(i, 2);
    }

    return s;
}

long int square_of_sum(int n)
{
    long int s { 0 };
    for (int i = 1; i < n+1; ++i) {
	s += i;
    }

    return pow(s, 2);
}

void solution()
{
    int v { 100 };
    long int res { square_of_sum(v) - sum_of_square(v) };
    std::cout << abs(res) << "\n";
}

int main(int argc, char *argv[])
{
    solution();
    
    return 0;
}
