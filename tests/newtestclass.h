/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Oct 12, 2013, 8:33:45 AM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testDifferentLetters01);
    CPPUNIT_TEST(testDifferentLetters02);
    CPPUNIT_TEST(testDifferentLetters03);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testDifferentLetters01();
    void testDifferentLetters02();
    void testDifferentLetters03();

};

#endif	/* NEWTESTCLASS_H */

