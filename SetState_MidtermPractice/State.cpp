#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "State.h"
namespace sdds {
	HomeStereo::HomeStereo(const Switch* other, int val):channels(nullptr) {
		this->channels = new Switch[val];
		this->channelAmt = val;
		for (auto i = 0u; i < channelAmt; i++) {
			strcpy(this->channels[i].name, other[i].name);
			this->channels[i].sState = other[i].sState;
			this->channels[i].sType = other[i].sType;
		}
	}

	HomeStereo& HomeStereo::setState(HomeStereo& channel, int state, int idx) {
		channel.channels[idx].sType = StateType::number;
		channel.channels[idx].sState.stateNum = state;
		return *this;
	}

	HomeStereo& HomeStereo::setState(HomeStereo& channel, char state, int idx) {
		channel.channels[idx].sType = StateType::character;
		channel.channels[idx].sState.stateChar = state;
		return *this;
	}

	HomeStereo& HomeStereo::setState(HomeStereo& channel, bool state, int idx) {
		channel.channels[idx].sType = StateType::boolean;
		channel.channels[idx].sState.stateBool = state;
		return *this;
	}

	std::ostream& HomeStereo::display(std::ostream& os) {
		for (auto i = 0u; i < this->channelAmt; i++) {
			os << "Channel Name: " << this->channels[i].name << " | " << "State ON/OFF? -> ";
			switch (this->channels[i].sType) {
			case StateType::boolean:
				if (this->channels[i].sState.stateBool == true) {
					os << "ON" << std::endl;
				}
				else {
					os << "OFF" << std::endl;
				}
				break;
			case StateType::character:
				if (this->channels[i].sState.stateChar == 'O') {
					os << "ON" << std::endl;
				}
				else {
					os << "OFF" << std::endl;
				}
				break;
			case StateType::number:
				if (this->channels[i].sState.stateNum == 1) {
					os << "ON" << std::endl;
				}
				else {
					os << "OFF" << std::endl;
				}
				break;
			default:
				os << "OFF" << std::endl;
			}
		}
		
		return os;
	}
}
