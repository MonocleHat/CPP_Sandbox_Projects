#define _CRT_SECURE_NO_WARNINGS
#include "State.h"
#include <iostream>

using namespace sdds;
using namespace std;

int main() {

	Switch s[3]{ };
	strcpy(s[0].name, "TV");
	strcpy(s[1].name, "RADIO");
	strcpy(s[2].name, "Game");

	s[0].sState.stateBool = false;
	s[1].sState.stateChar = 'X';
	s[2].sState.stateNum = 0;

	s[0].sType = StateType::boolean;
	s[1].sType = StateType::character;
	s[2].sType = StateType::number;
	
	HomeStereo h(s, 3);
	h.display(cout);
	cout << "_-----------------------_" << endl;

	h.setState(h, true, 0);
	h.setState(h, 'O', 1);
	h.setState(h, 1,2);
	h.display(cout);
}