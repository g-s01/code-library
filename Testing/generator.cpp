// thanks to errichto: https://github.com/Errichto/youtube/blob/master/testing/gen.cpp

#include <iostream>
#include <cstdlib>

using namespace std;
using ll = long long;

ll rnd(ll a, ll b)
{
    return a + rand() % (b - a + 1);
}
int main(int argc, char* argv[])
{
    int seed = atoi(argv[1]);
    srand(seed);
	// generator logic
}