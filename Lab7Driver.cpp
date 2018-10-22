//William Cary
//Lab5
//Oct 22, 2018

#include "Lab7MyStack.h"

int main() {
	string test;
	cout << "String Reversal #1 (enter string): ";
	cin >> test;
	cout << "Reversed: " << stringReversal1(test) << endl << endl;
	string test2;
	cout << "String Reversal #2 (enter string): ";
	cin >> test2;
	cout << "Reversed: " << stringReversal2(test2) << endl << endl;
	cout << "String Reversal #3 (enter string): ";
	cin >> test;
	cout << "Reversed: " << stringReversal3(test) << endl << endl;
	cout << "String Reversal #4 (enter string): ";
	cin >> test;
	cout << "Reversed: " << stringReversal4(test) << endl << endl;

	cin >> test;
	return 0;

}