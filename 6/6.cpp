#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "hello word" << endl;
	string str1 = "hello word";
	for (auto c : str1) {
		cout << c<<endl;
	}
	char s[10];
	cin >> s;
	cout << s << endl;
	return 0;
}
