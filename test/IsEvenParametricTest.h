#ifndef ISEVENPARAMETRICTEST_H_
#define ISEVENPARAMETRICTEST_H_

#include <gtest/gtest.h>
#include "../test/hogeTest.h"

class IsEvenParametricTest : public hogeTest, public ::testing::WithParamInterface<int> {
};

#endif
