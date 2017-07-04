#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	list<int> ilst;
	for (int i =0; i<10; i++)
		ilst.push_back(i);
	list<int>::iterator iter=ilst.end();

	while(iter != ilst.begin())
		cout << *--iter<< endl;
	return 0;
}