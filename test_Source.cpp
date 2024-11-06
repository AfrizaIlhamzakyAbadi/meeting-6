#include <cassert>
#include <iostream>
using namespace std;
struct student
{
	int NIM;
	float UTS;
	float UAS;
	float average;
};
float Average(student x)
{
	return (x.UTS + x.UAS) / 2.0;
}
student f[50];
int main()
{
	f[0].UTS = 90;
	f[0].UAS = 100;
	f[1].UTS = 91;
	f[1].UAS = 90;
	f[2].UTS = 80;
	f[2].UAS = 80;
#ifdef NDEBUG
	cerr << "Tests run with NDEBUG defined (asserts compiled out)";
	abort();
#endif
	assert(Average(f[0]) == 95);
	assert(Average(f[1]) == 90.5);
	assert(Average(f[2]) == 80);
	cout << "all test succeeded";
	return 0;
}