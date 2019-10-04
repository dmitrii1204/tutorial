#include <iostream>
#include <vector>
#include "2.hpp"
using namespace std;

int main()
{
	cout <<"Hello world!" <<endl;
	vector<double> v;
	v.push_back(10);
	v.push_back(3456);
	for (auto a : v)
		cout <<a <<" ";
	int n;
	cin >>n;
	int *ad = new int[n];
	delete[] ad;


	Okthen a(3, 4);
	a.out();
	return 0;
}
