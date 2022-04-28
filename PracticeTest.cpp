/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats("zzz"), 2);
}
 
TEST(PracticeTest, no_repeats)
{
    Practice testObject;
    ASSERT_EQ(testObject.count_starting_repeats(""), 0);
}
 
TEST(PracticeTest, palendrone_test)
{
    Practice testObject;
    ASSERT_EQ(testObject.isPalindrome("racecar"), true);
}
 
TEST(PracticeTest, palendrone_test_two)
{
    Practice testObject;
    ASSERT_EQ(testObject.isPalindrome("!racecar!"), true);
}

TEST(PracticeTest, palendrone_test_three)
{
    Practice testObject;
    ASSERT_EQ(testObject.isPalindrome("Test"), false);
}

TEST(PracticeTest, palendrone_test_empty)
{
    Practice testObject;
    ASSERT_EQ(testObject.isPalindrome(""), true);
}
 
TEST(PracticeTest, sort_one)
{
    Practice testObject;
    int val1 = 1;
    int val2 = 2;
    int val3 = 3;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 3);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 1);
}

TEST(PracticeTest, sort_two)
{
    Practice testObject;
    int val1 = 2;
    int val2 = 2;
    int val3 = 3;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 3);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 2);
}

TEST(PracticeTest, sort_three)
{
    Practice testObject;
    int val1 = 2;
    int val2 = 2;
    int val3 = 1;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 2);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 1);
}

TEST(PracticeTest, sort_four)
{
    Practice testObject;
    int val1 = 3;
    int val2 = 2;
    int val3 = 1;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 3);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 1);
}

TEST(PracticeTest, sort_five)
{
    Practice testObject;
    int val1 = 2;
    int val2 = 1;
    int val3 = 2;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 2);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 1);
}

TEST(PracticeTest, sort_six)
{
    Practice testObject;
    int val1 = 2;
    int val2 = 5;
    int val3 = 1;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 5);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 1);
}

TEST(PracticeTest, sort_all_equal)
{
    Practice testObject;
    int val1 = 2;
    int val2 = 2;
    int val3 = 2;
    testObject.sortDescending(val1, val2, val3);
    ASSERT_EQ(val1, 2);
    ASSERT_EQ(val2, 2);
    ASSERT_EQ(val3, 2);
}

