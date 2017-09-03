/**
* Filters out non-alphatbetic characters
*
* @author: Chad Manning
* Course: COMP B12
* Date Created: August 27, 2017
* Source File: filterChars.cpp
*/
#include <iostream>
#include <string>
using namespace std;

bool isUpperCase(char stringLetter){
    return (stringLetter >= 0x41 && stringLetter <= 0x5A);
}

bool isLowerCase(char stringLetter){
    return (stringLetter >= 0x61 && stringLetter <= 0x7A);
}

void removeNonAlpha(string &str){
    for(unsigned int i = 0; str[i] != 0x0; ++i){
        if(str[i] == 0x20){}
        else if(isUpperCase(str[i]) || isLowerCase(str[i])){}
        else {
            str.erase(str.begin() + i);
			--i;
        }
    }
    return;
}

int main() {
    string inString;

    while(getline(cin, inString)) { 
        removeNonAlpha(inString);
        cout << inString << endl;
    }

    return 0;
}