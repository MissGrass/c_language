//textin1.cpp--reading chars with a while loop
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch != '#'){
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
    return 0;
}

