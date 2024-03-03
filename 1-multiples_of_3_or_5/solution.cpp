#include <iostream>

int solution()
{
    int c { 0 }; // variable to store the sum
    int r { 1000 }; // upper bound
    for (int i = 1; i < r; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            c += i;
        }
    }

    return c;
}

int main(int argc, char **argv)
{
    std::cout << solution() << "\n";
    return 0;
}
