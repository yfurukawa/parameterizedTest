#ifndef PARAMETRICTEST_H_
#define PARAMETRICTEST_H_

#include <gtest/gtest.h>
#include "parametric.h"

class parametricTest : public ::testing::TestWithParam<int> {
protected:
	parametric* sut;
	void SetUp();
	void TearDown();

public:
	parametricTest();
	virtual ~parametricTest();

};

#endif
