#include <gtest/gtest.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>

namespace {
    TEST(IntToFloat, Equality) {
        for(int i=0; i<10000; i++) {
            int x = rand();
            long y = long(x);
            EXPECT_EQ(x, y) << "This test differs" << x << " " << y<<"\n";
        }
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}