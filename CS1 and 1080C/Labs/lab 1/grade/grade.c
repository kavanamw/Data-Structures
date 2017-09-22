// Name: PUT YOUR NAME HERE
// Laboratory 1:  Part B - Introduction to C++ IDE
// Source File: basic_calc.cpp
// This source code file has some minor typos that will need to corrected before
// it will compile and run properly.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double H1, H2, H3, T1, T2, T3, F, FP, average, averageT, averageH;

  cout <<"Homework 1 grade:";
  cin  >> H1;
  cout << "Homework 2 grade:";
  cin  >> H2;
  cout << "Homework 3 grade:";
  cin  >> H3;
  cout <<"Test 1 grade:";
  cin  >> T1;
  cout << "Test 2 grade:";
  cin  >> T2;
  cout << "Test 3 grade:";
  cin  >> T3;
  cout <<"Final Exam grade:";
  cin  >> F;
  cout << "Final Project:";
  cin  >> FP;

  averageH = (H1+H2+H3)/3;
  averageT = (T1+T2+T3)/3;
  average = (averageH) * .25 + (averageT) * .3 + (F) * .25 + (FP) * .2;
  cout << "Final Grade: " << average;

  return 0;
}
