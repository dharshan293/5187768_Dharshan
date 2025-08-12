#ifndef __DEMO_H
#define __DEMO_H
#include <stdlib.h>

typedef struct 
{
    int age;
    float height;/* data */
}Person;

void initialize_person(Person *p,int age, float height);
void update_age(Person *p,int new_age);
int is_adult(const Person *p);

#endif
