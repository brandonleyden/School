#include "die.h"
#include <iostream>
#include <string>
using namespace std;

void die(const string & msg) {
	cout << endl << "Fatal error: " << msg << endl;
	exit(1);
}
