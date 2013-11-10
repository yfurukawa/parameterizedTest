#ifndef HOGETEST_H_
#define HOGETEST_H_

#include <gtest/gtest.h>
#include "hoge.h"

class hogeTest : public ::testing::Test {
protected:
	hoge* sut;
	void SetUp();
	void TearDown();

public:
	hogeTest();
	virtual ~hogeTest();

};

#endif
