// Author: <Your Name Here>
// Source File: stats-sandbox.cpp
// Description: Sandbox for basic tests


#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned upperCaseChars(const string& st);
unsigned lowerCaseChars(const string& st);
unsigned numPunct(const string& st);
string convertToUpper(const string& st);
string removeSpaces(const string& st);
unsigned numWords(const string& st);
vector<int> characterCounts(const string& st);


int main(){
    
  string test_string1 = "XYZ abc dgf abc123 abc!!!???";
  string test_string2 = "XYZ abc dgf abc123 abc!!!???";
  string test_string3 = "XYZ abc dgf hhdfsdf dsfsdf abc123 abc!!!???";
  string empty_string;

  cout << "For empty_string: " << endl;
  cout << "UpperCase: 0 = " << upperCaseChars(empty_string) << endl;
  cout << "LowerCase: 0 = " << lowerCaseChars(empty_string) << endl;
  cout << "numPunct:  0 = " << numPunct(empty_string) << endl;
  cout << "numWords:  0 = " << numWords(empty_string) << endl;
  cout << endl;

  cout << "For test_string1: " << test_string1 << endl;
  cout << "UpperCase:  3 =  " << upperCaseChars(test_string1) << endl;
  cout << "LowerCase: 12 = " << lowerCaseChars(test_string1) << endl;
  cout << "numPunct:   6 = " << numPunct(test_string1) << endl;
  cout << "numWords:   5 = " << numWords(test_string1) << endl;

  cout << endl;
  cout << "For test_string2: " << test_string2 << endl;
  cout << "removeSpaces: XYZabcdgfabc123abc!!!??? = " << removeSpaces(test_string2) << endl;
  //cout << "convertToUpper: XYZ ABC DGF ABC123 ABC!!!??? = " << convertToUpper(test_string2) << endl;

  cout << endl;
  vector<int> counts = characterCounts(test_string3);

  /*cout << "For test_string3: " << test_string3 << endl;
  cout << "Character Counts:" << endl;
  for(unsigned i = 0; i < counts.size(); i++){
    cout << static_cast<char>(i+'a') << ":" << counts[i] << endl;
  }
  */

  cout << endl;
  cout << "For test_string3: " << test_string3 << endl;
  cout << "Select counts for characterCounts: " << endl;
  cout << "a:3 = " << counts[0] << endl;
  cout << "b:3 = " << counts[1] << endl;
  cout << "c:3 = " << counts[2] << endl;
  cout << "d:5 = " << counts[3] << endl;

  return 0;
}
