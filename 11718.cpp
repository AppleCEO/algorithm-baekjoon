#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	vector<string> s;
	string str;
	while (getline(cin, str))
		s.push_back(str);

	vector<string>::iterator it;

	for (it = s.begin(); it < s.end(); it++)
		cout << *it << "\n";

	return 0;
}
