//William Cary
//Lab5
//Oct 22, 2018

#include "Lab7MyStack.h"
#include <vector>

using namespace std;

string stringReversal1(string input) {
	stack<char> strRev1;
	for (string::iterator it = input.begin(); it != input.end(); it++) { //using iterator to insert characters into stack
		strRev1.push(*it);
	}
	string output = "";
	while (!strRev1.empty()) { //empties stack as it adds to outputs.
		output += strRev1.top();
		strRev1.pop();
	}
	return output;
}

string stringReversal2(string input) {
	vector<char> rev;
	for (string::iterator it = input.begin(); it != input.end(); it++) { //using iterator to insert characters into vector
		rev.push_back(*it);
	}
	string output = "";
	while (!rev.empty()) { //reads from back of vector
		output += rev.back();
		rev.pop_back();
	}
	return output;
}

string stringReversal3(string input) {
	list<char> rev;
	for (string::iterator it = input.begin(); it != input.end(); it++) { //using iterator characters are inserted into the list 
		rev.push_front(*it); //all characters are inserted at the front
	}
	string output = "";
	while (!rev.empty()) { //the output is the read 
		output += *rev.begin();
		rev.pop_front();
	}
	return output;
}

string stringReversal4(string input) {
	MyStack stackRev;
	for (string::iterator it = input.begin(); it != input.end(); it++) { // uses iterator to call function pull
		stackRev.push(*it);
	}
	string output = "";
	while (!stackRev.isEmpty()) {
		output += stackRev.pull();
	}
	return output;
}

bool MyStack::isEmpty() {
	return (myStack.empty()) ? true : false;
}

void MyStack::push(char &c) {
	myStack.push_back(c);
	return;
}

char MyStack::pull() { //outputs and returns and deletes the character in the vector
	char out = (myStack.back());
	myStack.pop_back();
	return out;
}
