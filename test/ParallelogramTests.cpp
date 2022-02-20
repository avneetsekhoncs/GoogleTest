#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../lib/simple/include/Parallelogram.h"

using namespace testing;
using namespace shapes;

TEST(ParallelogramTests, testPerimeterFAIL)
{
    Parallelogram ptest((Side)4, (Side)2, (Angle)35);
    EXPECT_EQ(12, ptest.getPerimeter());
}

TEST(ParallelogramTests, testAreaFAIL)
{
    Parallelogram ptest((Side)4, (Side)2, (Angle)35);
    EXPECT_NEAR(4.589, ptest.getArea(), 0.1);
}

TEST(ParallelogramTests, testKindFAIL)
{
    Parallelogram ptest((Side)4, (Side)4, (Angle)90);
    Parallelogram::Kind elem = Parallelogram::Kind::SQUARE;
    EXPECT_EQ(elem, ptest.getKind());
    
}

TEST(ParallelogramTests, testPerimeterPASS)
{
    Parallelogram ptest((Side)2, (Side)2, (Angle)35);
    EXPECT_EQ(8, ptest.getPerimeter());
}

TEST(ParallelogramTests, testAreaPASS)
{
    Parallelogram ptest((Side)2, (Side)2, (Angle)35);
    EXPECT_NEAR(2.2943, ptest.getArea(), 0.1);
}

TEST(ParallelogramTests, testKindPASS)
{
    Parallelogram ptest((Side)4, (Side)4, (Angle)25);
    Parallelogram::Kind elem = Parallelogram::Kind::RHOMBUS;
    EXPECT_EQ(elem, ptest.getKind());
    
}