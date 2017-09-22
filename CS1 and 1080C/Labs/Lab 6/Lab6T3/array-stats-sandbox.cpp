/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


void display_array(int array[], unsigned length);

int Min(int a, int b);
int Max(int a, int b);
void init(int array[], unsigned length, int value);
int arraySum(int array[], unsigned length);
double arrayMean(int array[], unsigned length);
int arrayMin(int array[], unsigned length);
int arrayMax(int array[], unsigned length);
double arrayStdDev(int array[], unsigned length);
int arrayFind(int array[], unsigned length, int value, unsigned position = 0);
int count(int array[], unsigned length, int value);
int range(int array[], unsigned length);
bool containsDups(int array[], unsigned length);
bool isSorted(int array[], unsigned length);

// This is your testing sandbox. It is already setup several test cases
// but it does not cover all testcases.
int main(){

  cout << "Min(2,1) = 1 = " << Min(2,1) << endl;
  cout << "Max(2,1) = 2 = " << Max(2,1) << endl;
  cout << "Init w/ ints" << endl;
  int a1[] = {1,2,3,4,5};
  init(a1, 5, 99);
  cout << "99 = " << a1[3] << endl;
  cout << "99 = " << a1[1] << endl;

  cout << endl << "Count w/ ints" << endl;
  int a3[] = {1,2,3,4,5,6,7,1,2};
  cout << "1 = " << count(a3, 9, 5) << endl;
  cout << "2 = " << count(a3, 9, 1) << endl;
  int a4[100];
  for(int i = 0; i < 100; i++){
    a4[i] = (i + i %7 ) % 11;
  }
  cout << "8 = " << count(a4, 100, 5) << endl;
  cout << "9 = " << count(a4, 100, 1) << endl;

  cout << endl << "Range" << endl;
  int a6[] = {1,2,1,10,-5,34};
  cout << "39 = " << range(a6, 6) << endl;
  cout << "9  = " << range(a6, 4) << endl;

  cout << endl << "Contains Dups" << endl;
  cout << "1 = " << containsDups(a6, 6) << endl;
  cout << "0 = " << containsDups(a6, 2) << endl;
  cout << "1 = " << containsDups(a4, 100) << endl;

  cout << "From UNIT TESTS" << endl;
  cout << endl << "Contains Dups" << endl;
  int a1a[] = {1,1,1,10};
  cout << "1 = " << containsDups(a1a, 4) << endl;
  int a2a[] = {1,1,1};
  cout << "1 = " << containsDups(a2a, 3) << endl;
  int a3a[] = {};
  cout << "0 = " << containsDups(a3a, 0) << endl;
  int a4a[] = {1,1,1,10,11,10};
  cout << "1 = " << containsDups(a4a, 6) << endl;
  int a5a[] = {4,5,6,7,8,10,12,13};
  cout << "0 = " << containsDups(a5a, 8) << endl;
  cout << "End from UNIT TESTS" << endl;


  cout << endl << "Is Sorted" << endl;
  int a7[] = {1,2,2,3,5,10,100};
  int a8[] = {1,2,3,4,4,5,4};
  cout << "0 = " << isSorted(a6, 6) << endl;
  cout << "1 = " << isSorted(a1, 5) << endl;
  cout << "1 = " << isSorted(a7, 7) << endl;
  cout << "0 = " << isSorted(a8, 7) << endl;

  cout << endl << "arrayFind" << endl;
  cout << " 5 = " << arrayFind(a7, 7, 10) << endl;
  cout << " 5 = " << arrayFind(a7, 7, 10,0) << endl;
  cout << "-1 = " << arrayFind(a7, 7, 1000) << endl;
  cout << "-1 = " << arrayFind(a7, 7, 1000,0) << endl;
  cout << " 3 = " << arrayFind(a8, 7, 4) << endl;
  cout << " 3 = " << arrayFind(a8, 7, 4, 0) << endl;
  cout << " 6 = " << arrayFind(a8, 7, 4, 5) << endl;
  cout << endl;

  int a9[] = {1,2,4,8,16,32,64};

  cout << endl;
  cout << "Array a9 Stats: " << endl;
  cout << "a9 Array" << endl;
  display_array(a9, 7);
  cout << endl;
  cout << "Min Array value = 1" << " = " << arrayMin(a9, 7) << endl;
  cout << "Max Array value = 64" << " = " << arrayMax(a9, 7) << endl;
  cout << "\tMax array element location = 6 = " << arrayFind(a9, 7, arrayMax(a9,7), 0) << endl;
  cout << "Sum Array value = 127" << " = " << arraySum(a9, 7) << endl;
  cout << "Array Mean value = 18.1429" << " = " << arrayMean(a9, 7) << endl;
  cout << "StdDev value = 21.2363" << " = " << arrayStdDev(a9, 7) << endl;
  cout << "End of a9 stats" << endl;

  return 0;
}
