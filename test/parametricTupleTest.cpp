#include "parametricTupleTest.h"

parametricTupleTest::parametricTupleTest() {

}

parametricTupleTest::~parametricTupleTest() {

}

void parametricTupleTest::SetUp() {
	sut = new parametric();
}

void parametricTupleTest::TearDown() {
	delete sut;
}

TEST_P (parametricTupleTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */
	const bool expected = std::tr1::get<0>(GetParam());
	const int number = std::tr1::get<1>(GetParam());

	EXPECT_EQ(expected, sut->isEven(number));
}

INSTANTIATE_TEST_CASE_P(TestData, parametricTupleTest,
	::testing::Values(
		std::tr1::make_tuple(false, 1),
		std::tr1::make_tuple(true, 2))
);

