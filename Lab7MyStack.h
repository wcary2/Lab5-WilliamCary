//William Cary
//Lab5
//Oct 22, 2018

//MyStack.h

#include <stack>
#include <list>
#include <queue>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#ifndef LAB_7_MY_STACK
#define LAB_7_MY_STACK

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);


class MyStack {
	vector<char> myStack;
public:
	bool isEmpty();
	void push(char &c);
	char pull();

};

#endif // !1

