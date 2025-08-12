#include <stdlib.h>
#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_initialize_person()
{
    Person p;
    initialize_person(&p, 25, 172.3f);
    TEST_ASSERT_EQUAL(25, p.age);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 172.3f, p.height);
}
void test_update_age()
{
    Person p = {20, 180.0f};
    update_age(&p, 30);
    TEST_ASSERT_EQUAL_INT(30, p.age);
}
void test_is_adult_true()
{
    Person p = {21,172.8f};
    TEST_ASSERT_TRUE(is_adult(&p));
}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_initialize_person);
    RUN_TEST(test_is_adult_true);
    RUN_TEST(test_update_age);

    return UNITY_END();
}