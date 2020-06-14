#include<gtest/gtest.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

TEST(SquareTest, FloatToDouble) {
    float x = (float(rand())/float(RAND_MAX)*100.0);
    double y = double(x);
    float xsq = x*x;
    double ysq = y*y;

    EXPECT_LE(abs(xsq - ysq), 0.1) << "Difference more for " << x << "\n";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}