
#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <cstring>
namespace sdds {
	enum class StateType { boolean, character, number };

	typedef struct {
		char name[20];
		StateType sType;
		union {
			bool stateBool;
			char stateChar;
			int stateNum;
		} sState;
	}Switch;

	class HomeStereo {
		Switch* channels;
		size_t channelAmt;
	public:
		HomeStereo(const Switch*, int val);
		HomeStereo& setState(HomeStereo&, int state, int idx);
		HomeStereo& setState(HomeStereo&, char state, int idx);
		HomeStereo& setState(HomeStereo&, bool state, int idx);
		std::ostream& display(std::ostream& os);
	};
}


#endif
