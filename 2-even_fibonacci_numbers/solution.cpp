#include <iostream>

long unsigned int fibonacci(int n)
{
    unsigned int t1 { 1 };
    unsigned int t2 { 2 };
    if (n == 1)
        return t1;
    if (n == 2)
        return t2;

    unsigned int nxt { t1 + t2 };
    unsigned int s { t2 };
    while (nxt < n) {
        t1 = t2;
        t2 = nxt;
        nxt = t1 + t2;
        if (nxt % 2 == 0)
            s += nxt;
    }

    return s;
}

int main(int argc, char *argv[])
{
    auto res { fibonacci(4000000) };
    std::cout << res << "\n";
    return 0;
}
