#include<stdio.h>
#include"demo.h"
#include "unity.h"

void setUp (){
    printf("Called before running each test case\n");
    printf("------------------------------------\n");
} 
void tearDown(){
    printf("Called at the end of each test case\n");
}

void test_sum_pos(){
    TEST_ASSERT_EQUAL(3,sum(1,2));
    TEST_ASSERT_EQUAL(10, sum(6,4));
}
void test_sum_neg(){
    TEST_ASSERT_EQUAL(-3,sum(-1,-2));
    TEST_ASSERT_EQUAL(10, sum(-6,-4));
}
void test_square()
{
    TEST_ASSERT_EQUAL(25,square(5));
    TEST_ASSERT_EQUAL(9,square(3));
}
void test_multiplication(){
    TEST_ASSERT_EQUAL(50,multi(50,1));
    TEST_ASSERT_EQUAL(90,multi(45,2));
}
void test_difference(){
    TEST_ASSERT_EQUAL(5,diff(10,5));
    TEST_ASSERT_EQUAL(15,diff(50,35));
}
void test_division(){
    TEST_ASSERT_EQUAL(5,div(10,2));
    TEST_ASSERT_EQUAL(2, div(100,50));
}

int main()
{
    int a=40,b=20,c,d,e,f,g;
    c=sum(a,b);
    d=diff(a,b);
    e=multi(a,b);
    f=div(a,b);
    g=square(a);

    printf("sum = %d\n",c);
    printf("Difference = %d\n",d);
    printf("Multiplication = %d\n",e);
    printf("Division = %d\n",f);
    printf("Square = %d\n",g);

    UNITY_BEGIN(); //mandatory initialize unity framework

    RUN_TEST(test_sum_pos);
    RUN_TEST(test_sum_neg);
    RUN_TEST(test_square);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_difference);
    RUN_TEST(test_division);

    return UNITY_END();
}