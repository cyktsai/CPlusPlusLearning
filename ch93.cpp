#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <iterator>

using namespace std;

bool showContainer(iterator<void> first_iter);
int main()
{
	vector<string> svec;
	list<string> slist;

	string spouse("Beth");
	slist.insert(slist.begin(), spouse);
	return 0;
}

bool showContainer(iterator<void> first_iter)
{

	return true;
}