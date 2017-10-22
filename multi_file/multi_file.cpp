#include <iostream>
#include "die.h"
#include "int.h"
using namespace std;


int main() {
	int var = 20;
	int var2 = int(7);
	cout << "Please input a integer and press enter." << endl;
	cin >> var;
	cout << endl;
	cout << "The integer you have input is " << var2 << endl;

	die("YES IT WORKED");
	return 0;
}
