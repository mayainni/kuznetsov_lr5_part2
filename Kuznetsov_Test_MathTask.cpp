#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

#include "M:\Kuznetsov_IST\kuznetsov_LR5\kuznetsov_lr5_part2\kuznetsov_MathTask.h"

using namespace cute;
void testTsak_1() {
    ASSERT(task_2(7));
    ASSERT(task_3(7));
}

void testTask_2_11() {
    ASSERT(task_2(1231));
    ASSERT(task_3(1231));
}

void testTask_2_52() {
    ASSERT(!task_2(1234));
    ASSERT(!task_3(1234));
}

void testTask_3() {
    ASSERT(!task_3(2468));
}

void testUserInputInt() {
    ASSERT(UserInputInt("123"));
    ASSERT(!UserInputInt("-5"));
    ASSERT(!UserInputInt("12a3"));
    ASSERT(!UserInputInt(""));
}

int main(){
    suite s;
    s.push_back(CUTE(testTsak_1));
    s.push_back(CUTE(testTask_2_11));
    s.push_back(CUTE(testTask_2_52));
    s.push_back(CUTE(testTask_3));
    s.push_back(CUTE(testUserInputInt));
    ide_listener<> listener;
    makeRunner(listener )(s, "test calcRectangleArea");

    return 0;
}