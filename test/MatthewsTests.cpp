#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../lib/simple/include/Matthews.h"

using namespace testing;
using namespace sequence;

TEST(MatthewsTests, testMatthewsZero)
{
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(3));
}

TEST(MatthewsTests, testMatthewsMinusOne)
{
    EXPECT_EQ(MatthewsOutcome::MINUS_ONE_CYCLE, checkMatthewsOutcome(-1));
}

TEST(MatthewsTests, testMatthewsMinusTwo)
{
    EXPECT_EQ(MatthewsOutcome::MINUS_TWO_CYCLE, checkMatthewsOutcome(-2));
}

TEST(MatthewsTests, testMatthewsMinusFour)
{
    EXPECT_EQ(MatthewsOutcome::MINUS_TWO_CYCLE, checkMatthewsOutcome(-4));
}

TEST(MatthewsTests, testMatthewsOne)
{
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(1));
}

TEST(MatthewsTests, testMatthewsTwo)
{
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(2));
}