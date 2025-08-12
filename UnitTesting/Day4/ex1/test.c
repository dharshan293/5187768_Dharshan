#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_cal_avg()
{
    int arr[]={2,4,6,8};
    float res=cal_avg(arr,4);
    TEST_ASSERT_FLOAT_WITHIN(0.0,5.0,res);
}
void test_cal_avg_single_element()
{
    int arr[]={10};
    float res=cal_avg(arr,1);
    TEST_ASSERT_FLOAT_WITHIN(0.1,10.0,res);
}
void test_cal_avg_zero_ele()
{
    float res=cal_avg(NULL,0);
    TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,res);
}
void test_cal_avg_neg_num()
{
    int arr[]={-2,-4,-6};
    float res=cal_avg(arr,3);
    TEST_ASSERT_FLOAT_WITHIN(0.01,-4.0,res);
}
void test_empty_string()
{
    const char* str="";
    TEST_ASSERT_EMPTY(str);
}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_cal_avg);
    RUN_TEST(test_cal_avg_single_element);
    RUN_TEST(test_cal_avg_zero_ele);
    RUN_TEST(test_cal_avg_neg_num);
    RUN_TEST(test_empty_string);
    
    return UNITY_END();
}