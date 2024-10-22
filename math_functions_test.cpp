#include <gtest/gtest.h>
#include "math_functions.cpp"



TEST(MathFuntiosTest,Add){
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(-1, 1), 0);

    }

TEST(MathFuntiosTest,Substract){
        EXPECT_EQ(subtract(3, 2), 1);
         EXPECT_EQ(subtract(-1, -1), 0);

        }
int main(int argc, char **argv){
     ::testing::InitGoogleTest(&argc,argv);
     return RUN_ALL_TESTS();
 }
