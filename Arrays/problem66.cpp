// C++ program to check if two given strings
// are rotations of  each other
#include <iostream>
using namespace std;

bool areRotations(string &s1, string &s2) {
  	s1 += s1;
  
  	return s1.find(s2) != string::npos;
}

int main() {
    string s1 = "aab"; 
  	string s2 = "aba";
  	
    cout << (areRotations(s1, s2) ? "true" : "false");
}