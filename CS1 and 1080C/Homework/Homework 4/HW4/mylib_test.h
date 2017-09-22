#ifndef MYLIB_TEST_H
#define MYLIB_TEST_H

// Disable sin and cos in mylib.cpp
#include <cmath>
#include <string>
#include <mylib.cpp>

// End sin/cos disabling

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.

class MyFact : public CxxTest::TestSuite {
public:
    void testFact1(){
        TS_ASSERT_DELTA(factorial(1), 1.0, 0.01);
    }
    void testFact2(){
        TS_ASSERT_DELTA(factorial(1), 1.0, 0.01);
    }
    void testFact3(){
        TS_ASSERT_DELTA(factorial(1), 1.0, 0.01);
    }
    void testFact4(){
        TS_ASSERT_DELTA(factorial(1), 1.0, 0.01);
    }
    void testFact5(){
        TS_ASSERT_DELTA(factorial(1), 1.0, 0.01);
    }

};

class MyDeg2Rad : public CxxTest::TestSuite {
public:
    void test1(){
        TS_ASSERT_DELTA(degreesToRadians(0.0), 0.0, 0.01);
    }

    void test2(){
        TS_ASSERT_DELTA(degreesToRadians(45), PI/4, 0.01);
    }
    void test3(){
        TS_ASSERT_DELTA(degreesToRadians(0.0), 0.0, 0.01);
    }

    void test4(){
        TS_ASSERT_DELTA(degreesToRadians(45), PI/4, 0.01);
    }
    void test5(){
        TS_ASSERT_DELTA(degreesToRadians(0.0), 0.0, 0.01);
    }
};

class MyisPrime : public CxxTest::TestSuite {
public:
    void test1(){
        TS_ASSERT(!isPrime(1));
    }
    void test2(){
        TS_ASSERT(!isPrime(1));
    }
    void test3(){
        TS_ASSERT(!isPrime(1));
    }
    void test4(){
        TS_ASSERT(!isPrime(1));
    }
    void test5(){
        TS_ASSERT(!isPrime(1));
    }
};

class MyCountDupsString : public CxxTest::TestSuite {
public:
    void test1(){
        string a[] = {"string1", "string1", "string1"};
        TS_ASSERT_EQUALS(containsDups(a, 3), true);
    }
    void test2(){
        string a[] = {"string1", "string1", "string1"};
        TS_ASSERT_EQUALS(containsDups(a, 3), true);
    }
    void test3(){
        string a[] = {"string1", "string1", "string1"};
        TS_ASSERT_EQUALS(containsDups(a, 3), true);
    }
    void test4(){
        string a[] = {"string1", "string1", "string1"};
        TS_ASSERT_EQUALS(containsDups(a, 3), true);
    }
    void test5(){
        string a[] = {"string1", "string1", "string1"};
        TS_ASSERT_EQUALS(containsDups(a, 3), true);
    }
};

class MyRotateStrings : public CxxTest::TestSuite {
public:
    const int RIGHT_DIR = 2;
    const int LEFT_DIR = 1;
    const int INV_DIR = 3;
    void test1(){
        string a = "xyz123456";
        TS_ASSERT_EQUALS(rotateString(a, LEFT_DIR, 6), "456xyz123");
    }
    void test2(){
        string a = "xyz123456";
        TS_ASSERT_EQUALS(rotateString(a, LEFT_DIR, 6), "456xyz123");
    }
    void test3(){
        string a = "xyz123456";
        TS_ASSERT_EQUALS(rotateString(a, LEFT_DIR, 6), "456xyz123");
    }
    void test4(){
        string a = "xyz123456";
        TS_ASSERT_EQUALS(rotateString(a, LEFT_DIR, 6), "456xyz123");
    }
    void test5(){
        string a = "xyz123456";
        TS_ASSERT_EQUALS(rotateString(a, LEFT_DIR, 6), "456xyz123");
    }
};

class MyCountChars : public CxxTest::TestSuite {
public:
    void test1(){
        string a = "aaaa";
        TS_ASSERT_EQUALS(countChars(a, 'a'), 4);
    }
    void test2(){
        string a = "aaaa";
        TS_ASSERT_EQUALS(countChars(a, 'a'), 4);
    }
    void test3(){
        string a = "aaaa";
        TS_ASSERT_EQUALS(countChars(a, 'a'), 4);
    }
    void test4(){
        string a = "aaaa";
        TS_ASSERT_EQUALS(countChars(a, 'a'), 4);
    }
    void test5(){
        string a = "aaaa";
        TS_ASSERT_EQUALS(countChars(a, 'a'), 4);
    }
};

#endif
