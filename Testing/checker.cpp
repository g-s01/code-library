// thanks to ali ibrahim: https://github.com/Ali-Ibrahim137/Competitive-Programming/blob/master/Articles/Stress%20Testing/good%20implementation%20using%20checker/checker.cpp

#include <iostream>
#include <string> 
#include <fstream>
#include <vector>

using namespace std;
using ll = long long;
using vll = vector<ll>;

#define pb push_back

vll readAns(ifstream &fin)
{
   	// read input like given in the input format 
}

int main(int argc, char * argv[])
{
    ifstream fin("input", ifstream::in);
    ifstream ans("output", ifstream::in);
    ifstream cor("correctAnswer", ifstream::in);
	// checker logic
	vll output = readAns(ans);
	vll correctAnswer = readAns(cor);
	// check if output is the correctAnswer or not, if not return -1 then output this is the checker_log
	// write the logic here	
	return 0; 
}