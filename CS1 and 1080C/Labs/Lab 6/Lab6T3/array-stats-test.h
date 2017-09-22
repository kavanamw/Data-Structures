#ifndef STATS_TEST_H
#define STATS_TEST_H

#include <iostream>
#include <cxxtest/TestSuite.h>

#include "array-stats.cpp"

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.


class MyArraySum : public CxxTest::TestSuite {
public:
  void testSum1() {
    int a[] = {1,2,3};
    TS_ASSERT_EQUALS(arraySum(a, 3), 6);
  }
  void testSum2() {
    int a[] = {};
    TS_ASSERT_EQUALS(arraySum(a, 0), 0);
  }
  void testSum3() {
    int a[] = {1,2,3};
    TS_ASSERT_EQUALS(arraySum(a, 3), 6);
  }
  void testSum4() {
    int a[] = {};
    TS_ASSERT_EQUALS(arraySum(a, 0), 0);
  }
  void testSum5() {
    int a[] = {1,2,3};
    TS_ASSERT_EQUALS(arraySum(a, 3), 6);
  }
  void testSum6() {
    int a[] = {};
    TS_ASSERT_EQUALS(arraySum(a, 0), 0);
  }

};

class MyArrayMean : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {1,2,3};
    TS_ASSERT_DELTA(arrayMean(a, 3), 2, 0.0001);
  }
  void testMean2() {
    int a[] = {};
    TS_ASSERT_DELTA(arrayMean(a, 0), 0, 0.0001);
  }
  void testMean3() {
    int a[] = {1,2,3};
    TS_ASSERT_DELTA(arrayMean(a, 3), 2, 0.0001);
  }
  void testMean4() {
    int a[] = {};
    TS_ASSERT_DELTA(arrayMean(a, 0), 0, 0.0001);
  }
  void testMean5() {
    int a[] = {1,2,3};
    TS_ASSERT_DELTA(arrayMean(a, 3), 2, 0.0001);
  }
  void testMean6() {
    int a[] = {};
    TS_ASSERT_DELTA(arrayMean(a, 0), 0, 0.0001);
  }

};

class MyArrayMin : public CxxTest::TestSuite {
public:
};

class MyArrayMax : public CxxTest::TestSuite {
public:
};

class MyArrayStDev : public CxxTest::TestSuite {
public:
};

class MyArrayCount : public CxxTest::TestSuite {
public:
};


#endif
