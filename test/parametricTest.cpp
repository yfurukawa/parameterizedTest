#include "parametricTest.h"

parametricTest::parametricTest() {

}

parametricTest::~parametricTest() {

}

void parametricTest::SetUp() {
	sut = new parametric();
}

void parametricTest::TearDown() {
	delete sut;
}

TEST_P (parametricTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */
	EXPECT_EQ(true, sut->isEven(GetParam()));
}

INSTANTIATE_TEST_CASE_P(TestDataIntRange, parametricTest,
	::testing::Range(0, 10, 2)
);

INSTANTIATE_TEST_CASE_P(TestDataIntValue, parametricTest, 
	::testing::Values(4, 6, 20, 22)
);

