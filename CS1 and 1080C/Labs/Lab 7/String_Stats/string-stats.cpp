// Author: <fill in your name>
// Source File: string-stats.cpp
// Description: Various string statistics

#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
//#include <boost/algorithm/string.hpp>

using namespace std;

//done
// Count the upper case characters in string st
unsigned upperCaseChars(const string& st){
    int Size = st.length();
    int counter = 0;
    for(int k = 0;k < Size;k++)
    {
        if(isupper(st[k]))
        {
            counter++;
        }
    }
    return counter;
}

//done
// Count the lower case characters in string st
unsigned lowerCaseChars(const string& st){
    int Size = st.length();
    int counter = 0;
    for(int k = 0;k < Size;k++)
    {
        if(islower(st[k]))
        {
            counter++;
        }
    }
    return counter;
}

//done
// Count the punction characters in string st
// use ispunct to determine if the character is a
// punction
unsigned numPunct(const string& st){
    int Size = st.length();
    int counter = 0;
    for(int k = 0;k < Size;k++)
    {
        if(ispunct(st[k]))
        {
            counter++;
        }
    }
    return counter;
}

//done
// Convert string st to uppercase returning a new
// string
string convertToUpper(const string& st){
    int Size = st.length();
    string Upper = st;
    for(int k = 0;k < Size;k++)
    {
        Upper[k] = toupper(st[k]);
    }
    return Upper;
}


// Remove all the spaces (use ispace) from string st and
// return a new string
string removeSpaces(const string& st){
    string String;
    for(int k = 0;k < st.length();k++)
    {
        char c = st[k];
        if(!isspace(c))
        {
            String += c;
        }
    }
    return String;
}

//done
// Count the number of words in a string st
unsigned numWords(const string& st){
    int counter = 0;
    string String = st;
    if(st.length() > 0)
    {
        string String = st;
        String = String+" ";
    }
    for(unsigned int k = 0;k < st.length();k++)
    {
        if(isalpha(String[k]) &&! (isalpha(String[k+1])))
        {
            counter++;
        }
    }
    return counter;
}


// Count the individual alphabetic characters
// Treat lowercase and uppercase the same
vector<int> characterCounts(const string& st){
    vector<int> ret(26);
    string String = st;
    for(unsigned y = 0;y < st.length();y++)
    {
        String[y] = toupper(st[y]);
    }
    string A = "ABCDEFGHIJKLMNOPQRSTUVQXYZ";
    for(unsigned k = 0;k < st.length();k++)
    {
        for(unsigned c = 0;c < st.length();c++)
        {
            if(String[c] == A[k])
                ret[k]+=1;
        }
    }
return ret;
}
