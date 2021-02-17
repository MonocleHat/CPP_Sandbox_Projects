/*
 * Objective: I need to perform the same sort of snipping but this time converting a grabbed int to a value of size_t. 
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
	string number = "        1995,";
	size_t holder = 0;
	string myStr;
	myStr = number.substr(number.find_first_not_of(" "), number.find(","));
	cout << "STEP 1:_" << myStr << "_otherText" << endl;
	myStr = myStr.substr(0,myStr.find_last_not_of(" "));
	cout << "STEP 2:_" << myStr << "_otherText" << endl;
	holder = stoi(myStr);
	cout << "NUMBER:_" << holder <<"_otherText"<<endl;
}
//Outcome: Successful output
