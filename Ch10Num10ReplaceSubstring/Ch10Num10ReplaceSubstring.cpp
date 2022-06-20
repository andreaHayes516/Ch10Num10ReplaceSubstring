/************************************************
** Author: Andrea Hayes
** Date:May 31,2020
** Purpose: Create a find and replace
** Input: 3 strings
** Processing: find and replace
** Output: String with replaced values
*************************************************/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;
string replaceSubstring(string, string, string);
int main() {

    // Declare Variables
    string string1,string2,string3,string4;

    // Get user input
    cout << "Enter a sentence: ";
    getline(cin, string1);
    cout << "What word would you like to replace? ";
    getline(cin,string2);
    cout << "What would you like to replace it with? ";
    getline(cin,string3);

    //Call Function and Display
    string4 = replaceSubstring(string1, string2, string3);
    cout << string4 << endl;
    
    return 0;
}
//Function to find string and replace it
string replaceSubstring(string haystack, string needle, string replace) {
    int pos=0;
    while ((pos = haystack.find(needle, pos)) != string::npos) {
        haystack = haystack.replace(pos, needle.size(), replace);
        pos += replace.size();
    }
    return haystack;
}
