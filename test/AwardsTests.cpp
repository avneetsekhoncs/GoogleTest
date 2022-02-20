#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../lib/simple/include/Awards.h"

using namespace testing;
using namespace awards;

class MockAward : public awards::AwardCeremonyActions
{
public:
    MOCK_METHOD(void, playAnthem, (), (override));
    MOCK_METHOD(void, awardBronze, (std::string recipient), (override));
    MOCK_METHOD(void, awardSilver, (std::string recipient), (override));
    MOCK_METHOD(void, awardGold, (std::string recipient), (override));
    MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
};

class MockRankList : public awards::RankList
{
public:
    MOCK_METHOD(std::string, getNext, (), (override));
};

TEST(AwardsTests, testAwardsActions)
{
    MockAward awardceremonyactions;
    EXPECT_CALL(awardceremonyactions, playAnthem())
        .Times(AtLeast(1));
    EXPECT_CALL(awardceremonyactions, awardBronze("Third"))
        .Times(AtLeast(1));
    EXPECT_CALL(awardceremonyactions, awardSilver("Second"))
        .Times(AtLeast(1));
    EXPECT_CALL(awardceremonyactions, awardGold("First"))
        .Times(AtLeast(1));
    EXPECT_CALL(awardceremonyactions, turnOffTheLightsAndGoHome())
        .Times(AtLeast(1));
    
    MockRankList ranklist;
    EXPECT_CALL(ranklist, getNext())
        .WillOnce(Return("Third"))
        .WillOnce(Return("Second"))
        .WillOnce(Return("First"));
    
    performAwardCeremony(ranklist, awardceremonyactions);
}