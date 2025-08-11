#include "leapyear.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_leapyear()
{
    TEST_ASSERT_EQUAL(1, IsLeapYear(1996));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2016));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2020));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2024));
}
void test_not_leapyear()
{
    TEST_ASSERT_EQUAL(0, IsLeapYear(1995));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2017));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2021));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2025));
}
void test_centuries()
{
    TEST_ASSERT_EQUAL(1, IsLeapYear(2000));
    TEST_ASSERT_EQUAL(0, IsLeapYear(1900));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2100));
    TEST_ASSERT_EQUAL(1, IsLeapYear(1600));
}
void test_invalid_year()
{
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-2000));
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-1900));
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-2100));
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-1600));
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_leapyear);

    #if !defined (DISABLE_TEST)
    RUN_TEST(test_not_leapyear);
    #endif

    RUN_TEST(test_centuries);
    RUN_TEST(test_invalid_year);
    
    return UNITY_END();
}