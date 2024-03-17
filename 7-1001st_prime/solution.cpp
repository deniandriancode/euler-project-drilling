#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    int num { 120000 };
    std::vector<int> ps (num, 1); // 1 for true
    std::vector<long int> res;
    long int p { 2 };

    while (p * p <= num) {
	if (ps[p] == 1) {
	    for (long int j = p * p; j <= num; j += p) {
		ps[j] = 0;
	    }
	}
	p += 1;
    }

    for (long int i = 2; i <= num; ++i) {
	if (ps[i] == 1) {
	    res.push_back(i);
	}
    }

    // std::cout << res.size() << "\n";
    std::cout << res[10000] << "\n";
    
    return 0;
}
