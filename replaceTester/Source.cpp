#include <iostream>
#include <cstring>
using namespace std;
/*
    This code finds a set of incorrect words, replacing them based on contents of a wordlist
    It works. for now.
    Developed 02-19-2021
    V1.5
    Author: Brandyn "MonocleHat" P
*/
int main()
{
    std::string text = "teh dog reced with teh brown fox and ran to teh hoose\n";
    size_t startRange = 0;
    std::string bad[3] = { "hoose", "teh", "reced" };
    std::string good[3] = { "house", "the", "raced" };
    bool stringsPresent = true;
    for (int i = 0; i < 3; i++) {
        
        startRange = text.find(bad[i].c_str(), 0, bad[i].length());
        while (startRange != std::string::npos) {
            if ((startRange = text.find(bad[i].c_str(), 0, bad[i].length()))==std::string::npos) {
                stringsPresent = false;
            }
            else {
                stringsPresent = true;
            }
            if (stringsPresent) {
                startRange = text.find(bad[i].c_str(), 0, bad[i].length());
                text.replace(startRange, good[i].length(), good[i]);
            }


        }
    }

    cout << text;
}
