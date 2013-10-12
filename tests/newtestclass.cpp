/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Oct 12, 2013, 8:33:46 AM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

#include <string>
using namespace std;

int differentLetters(string word);

void newtestclass::testDifferentLetters01() {
    string word = "Hello";
    int actual = differentLetters(word);
    int expected = 3;
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void newtestclass::testDifferentLetters02() {
    string word = "abcdfffr";
    int actual = differentLetters(word);
    int expected = 5;
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void newtestclass::testDifferentLetters03() {
    string word = "";
    int actual = differentLetters(word);
    int expected = 0;
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}
