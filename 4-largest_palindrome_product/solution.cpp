#include <iostream>
#include <string>


bool palindrome(std::string s)
{
    bool res { true };

    for (int i = 0; i < s.length() / 2; ++i) {
	if (s[i] != s[s.length()-i-1]) {
	    res = false;
	}
    }
    
    return res;
}

void solution()
{
    int n;
    int a { 999 };
    int b { 999 };

    bool i { true };
    while (a >= 100 && b >= 100) {
	n = a * b;
	std::string s = std::to_string(n);
	if (palindrome(s)) {
	    std::cout << n << "\n";
	    break;
	}

	if (i) {
	    a -= 1;
	    i = !i;
	} else {
	    b -= 1;
	    i = !i;
	}
    }
}

int main(int argc, char *argv[])
{
    solution();
    return 0;
}
