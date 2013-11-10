#ifndef ISEVENPARAMETRICTEST2_H_
#define ISEVENPARAMETRICTEST2_H_

#include <gtest/gtest.h>
#include <tr1/tuple>
#include "../test/hogeTest.h"

class IsEvenParametricTest2 : public hogeTest, public ::testing::WithParamInterface< std::tr1::tuple<bool, int> > {
};

#endif
