# Unit testing  on c++

## Description
This is a simple example of how to use the Google Test framework to test a simple c++ program.
The program is a simple calculator that can add, subtract. The program is tested using the Google Test framework.
The tests are written in the math_functions_test.cpp file.


1. [Installation](#Installation)

```bash
git clone https://github.com/google/googletest.git
cd googletest
mkdir build
cd build
cmake ..
make
sudo cp lib/*.a /usr/lib
```

2. [Create Project](#CreateProject)
```bash
mkdir gtest_exaple
cd gtest_exaple

```
3. [Testing](#Testing)
    - 3.1 [Create the math_functions.cpp file](#Testing)
      ```c++
      int add(int a, int b) {
          return a + b;
      }
      int subtract(int a, int b) {
          return a - b;
      }
      ```
     - 3.2
        ```c++
        // math_functions_test.cpp
        // tests to the function add
        TEST(MathFunctionsTest, Add) {
            EXPECT_EQ(add(1, 2), 3);
            EXPECT_EQ(add(-1, 1), 0);
        }
        // tests to the function Subtract
        TEST(MathFunctionsTest, Subtract) {
            EXPECT_EQ(subtract(3, 2), 1);
            EXPECT_EQ(subtract(-1, -1), 0);
        }
        int main(int argc, char **argv) {
            ::testing::InitGoogleTest(&argc, argv);
            return RUN_ALL_TESTS();
        }
        ```
4. [Compilate the test](#Run)
```bash
$ g++ -o test math_functions_test.cpp -lgtest -lpthread

```

5. [Run the test](#Run)
```bash
$ ./test
```
# go0d LUcK
