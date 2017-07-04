#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool srchIntVec(int *i, vector<int>::iterator &first, vector<int>::iterator &last);
int main()
{
	vector<int> ivec;
	for (int i=0; i<10; i++)
		ivec.push_back(i);

	int srchValue=0;
	cout << "Please input the integer value you want to search\n";
	cin >> srchValue;
	vector<int>::iterator first = ivec.begin();
	vector<int>::iterator last = ivec.end();
	srchIntVec(&srchValue, first, last);
	return 0;
}

bool srchIntVec(int *i, vector<int>::iterator &first, vector<int>::iterator &last)
{
	while(first!=last)
	{
			if (*i == *first)
				cout<< "hit!" <<endl;
			first++;
	}
	return true;
}