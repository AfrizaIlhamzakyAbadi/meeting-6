#include <iostream>
using namespace std;
unsigned int n{};
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
	while (1)
	{
		cout << "number of student: ";
		cin >> n;
		if (n <= 50)
		{
			cout << '\n';
			break;
		}
		cout << "too many students\n" << '\n';
	}
	for (int i{ 0 }; i < n; i++)
	{
		cout << '\n' << "NIM: ";
		cin >> f[i].NIM;
		cout << "UTS score: ";
		cin >> f[i].UTS;
		cout << "UAS score: ";
		cin >> f[i].UAS;
		f[i].average = Average(f[i]);
	}
	cout << "___________________\n";
	for (int k{ 0 }; k < n; k++)
	{
		cout << '\n' << "NIM:" << f[k].NIM << '\n' << "average score: " << f[k].average << '\n';
	}
	return 0;
}
