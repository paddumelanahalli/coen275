Source file:

#include "pch.h"
#include <iostream>
using namespace std;


TEST(TestCaseName, TestName1){
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  cout << "After Expect" << endl;
}

TEST(TestCaseName, TestName2){
	ASSERT_EQ(100, 100);
	cout << "After Assert" << endl;
}

class check {
	int val;
public:
	check() : val(0) {}
	void setValue(int newVal) { this->val = newVal; }
	int getValue() { return this-> val; }
};

TEST(TestCaseName, TestName3) {
	//Arrange
	check* c1 = new check();
	
	//act
	c1->setValue(100);

	// assert
	ASSERT_EQ(c1->getValue(), 100);
}

TEST(TestCaseName, TestName4) {
	//Arrange
	check* c1 = new check();

	//act
	c1->setValue(500);

	// assert
	ASSERT_EQ(c1->getValue(), 500);
}

// Test Fixtures
struct TF : public testing::Test {
	check* c1;
	void SetUp() { cout << "SETUP" << endl;  c1 = new check(); }
	void TearDown() { cout << "TEARDOWN" << endl; delete c1; }
};

TEST_F(TF, TestName5) {
	//act
	c1->setValue(100);

	// assert
	ASSERT_EQ(c1->getValue(), 100);
}


Header File:
//
// pch.h
//

#pragma once

#include "gtest/gtest.h"
