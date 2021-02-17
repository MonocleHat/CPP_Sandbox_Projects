#include <iostream>
using namespace std;
/*
 * An code snippet used in several OOP345 workshops. This code recieves a 
 * string of text, with multiple spaces between each delimited statement
 * and seperates them based on delimiter removing trailing whitespaces
 * The specific setup is just to find the first non space character,
 * break into substrings, and repeat for the last non space character.
 * This is a test to see if i can shorten that code
 */

int main(){
	std::string other = "John Doe     ,            Jane Doe.";
	std::string myStr;

	//beginning
	myStr = other.substr(other.find_first_not_of(" "), other.find(","));
	cout << "STEP 1: " << myStr << "ThisShouldn'tBeNextToString" << endl;
	myStr = myStr.substr(0,myStr.find_last_not_of(" ")+1);
	cout << "STEP 2: " << myStr << "ShouldBeTooClose" <<  endl;
}
/*
 * Result: This code worked. 
 * important notes: To successfully retrieve ALL data you must add the +1
 * you can also shorten the steps to erase up to the delimiting character using
 * other.erase(0,other.find(',')+1) <-- this erases everything including the comma.
 */
