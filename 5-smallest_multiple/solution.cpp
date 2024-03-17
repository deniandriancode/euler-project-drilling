#include <iostream>

bool valid(long int s)
{
    int arr[] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11 };
    bool res { true };
    for (int i : arr) {
	if (s % i != 0) {
	    res = false;
	    break;
	}
    }

    return res;
}

void solution()
{
    int n { 2520 };
    long int s { n };
    bool cond { true };
    
    while (cond) {
	if (valid(s)) {
	    cond = false;
	    break;
	}
	s += n;
    }

    std::cout << s << "\n";
}

int main(int argc, char *argv[])
{
    solution();
    
    return 0;
}
