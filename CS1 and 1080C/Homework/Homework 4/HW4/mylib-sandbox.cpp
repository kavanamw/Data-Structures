
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

const double PI = atan(1.0)*4.0;
const double PRECISION = 0.00001;

double factorial(double n);
double degreesToRadians(double angle_in_degrees);
bool isPrime(int number);
int countChars(string input, char which_char);
bool containsDups(string sarray[], int length);

const int LEFT_DIR = 1;
const int RIGHT_DIR = 2;

string rotateString(string to_rotate, int direction, int offset);

int main(){


    string A[] = {"XYZ", "xyz", "abc" };	// No dups
    string B[] = {"xyz", "xyz", "abc" };	// has dups

    cout << "Contains Dupslicates" << endl;
    cout << "0 = " << containsDups(A, 3) << endl;
    cout << "1 = " << containsDups(B, 3) << endl;
    cout << endl;


    string X = "xyz123456";
    string Y;

    cout << "For Rotated Strings" << endl;
    cout << "Right Shift of 3: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, RIGHT_DIR, 3) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 456xyz123" << endl;

    cout << "Right Shift of 6: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, RIGHT_DIR, 6) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 123456xyz" << endl;

    cout << "Left Shift of 6: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, LEFT_DIR, 6) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 456xyz123" << endl;

    cout << "Left Shift of 3: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, LEFT_DIR, 3) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 123456xyz" << endl;

    return 0;
}

/*
Right Shift of 3: 
Org: xyz123456
Rotated: 456xyz123
Right Shift of 6: 
Org: xyz123456
Rotated: 123456xyz
Left Shift of 6: 
Org: xyz123456
Rotated: 456xyz123
Left Shift of 3: 
Org: xyz123456
Rotated: 123456xyz
*/
