#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_even()
{
    TEST_ASSERT_TRUE(is_even(4));
    TEST_ASSERT_TRUE(is_even(6));
    TEST_ASSERT_TRUE(is_even(8));
    TEST_ASSERT_TRUE(is_even(10));
}
void test_odd()
{
    TEST_ASSERT_FALSE(is_even(3));
    TEST_ASSERT_FALSE(is_even(5));
    TEST_ASSERT_FALSE(is_even(7));
    TEST_ASSERT_FALSE(is_even(9));
}
void test_max_equal()
{
    TEST_ASSERT_EQUAL(45,max(45,3));
    TEST_ASSERT_EQUAL(98,max(5,98));
    TEST_ASSERT_EQUAL(79,max(79,34));
    TEST_ASSERT_EQUAL(24,max(24,9));
}
void test_min_equal()
{
    TEST_ASSERT_EQUAL(3,min(45,3));
    TEST_ASSERT_EQUAL(5,min(5,98));
    TEST_ASSERT_EQUAL(34,min(79,34));
    TEST_ASSERT_EQUAL(9,min(24,9));
}
void test_max_not_equal()
{
    TEST_ASSERT_NOT_EQUAL(44,max(45,3));
    TEST_ASSERT_NOT_EQUAL(97,max(5,98));
    TEST_ASSERT_NOT_EQUAL(78,max(79,34));
    TEST_ASSERT_NOT_EQUAL(23,max(24,9));
}
void test_greater_than()
{
    TEST_ASSERT_GREATER_THAN(44,max(45,3));
    TEST_ASSERT_GREATER_THAN(97,max(5,98));
    TEST_ASSERT_GREATER_THAN(78,max(79,34));
    TEST_ASSERT_GREATER_THAN(23,max(24,9));
}
void test_max_greater_than_or_equal()
{
    TEST_ASSERT_GREATER_OR_EQUAL(45,max(45,3));
    TEST_ASSERT_GREATER_OR_EQUAL(98,max(5,98));
    TEST_ASSERT_GREATER_OR_EQUAL(78,max(79,34));
    TEST_ASSERT_GREATER_OR_EQUAL(21,max(24,9));
}
void test_lesser_than()
{
    TEST_ASSERT_LESS_THAN(4,min(45,3));
    TEST_ASSERT_LESS_THAN(6,min(5,98));
    TEST_ASSERT_LESS_THAN(44,min(79,34));
    TEST_ASSERT_LESS_THAN(11,min(24,9));
}

int main()
{
    UNITY_BEGIN();
    
    RUN_TEST(test_even);
    RUN_TEST(test_odd);
    RUN_TEST(test_max_equal);
    RUN_TEST(test_min_equal);
    RUN_TEST(test_max_not_equal);
    RUN_TEST(test_greater_than);
    RUN_TEST(test_max_greater_than_or_equal);
    RUN_TEST(test_lesser_than);

    return UNITY_END();
}