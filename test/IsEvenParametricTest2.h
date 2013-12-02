#ifndef ISEVENPARAMETRICTEST2_H_
#define ISEVENPARAMETRICTEST2_H_

#include <gtest/gtest.h>
#include <boost/tuple/tuple.hpp>
#include "../test/hogeTest.h"

class IsEvenParametricTest2 : public hogeTest, public ::testing::WithParamInterface< boost::tuple<bool, int> > {
};

#endif
