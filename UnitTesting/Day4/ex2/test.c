#include <stdlib.h>
#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_swap()
{
    int a=10,b=20;
    swap(&a, &b);
    TEST_ASSERT_EQUAL_INT(20,a);
    TEST_ASSERT_EQUAL_INT(10,b);
}
void test_swap_with_null()
{
    int a=5;
    swap(&a,NULL);
    TEST_ASSERT_EQUAL_INT(5,a);
}
void test_rev_arr()
{
    int arr[] = {1,2,3,4,5};
    rev_arr(arr,5);
    int exp[]={5,4,3,2,1};
    TEST_ASSERT_EQUAL_INT_ARRAY(exp, arr, 5);
}
void test_rev_arr_single_ele()
{
    int arr[]={10};
    rev_arr(arr,1);
    int exp[]={10};
    TEST_ASSERT_EQUAL_INT_ARRAY(exp,arr,1);
}
void test_rev_arr_zero_len()
{
    int arr[]={1,2,3};
    rev_arr(arr,0);
    int exp[]={1,2,3};
    TEST_ASSERT_EQUAL_INT_ARRAY(exp,arr,3);
}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_swap);
    RUN_TEST(test_swap_with_null);
    RUN_TEST(test_rev_arr);
    RUN_TEST(test_rev_arr_single_ele);
    RUN_TEST(test_rev_arr_zero_len);

    return UNITY_END();
}