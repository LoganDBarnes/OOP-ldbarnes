#include "shield.h"
#include "gtest/gtest.h"

using namespace std;
using namespace shield;

TEST(Shield, Constructor) {
  string style = "round";
  string material = "steel";
  string color = "silver";
  int weight = 10;
  bool thrown = false;

  Shield shield(style, material, color, weight, thrown);
  ASSERT_EQ(shield.style(), style);
  ASSERT_EQ(shield.material(), material);
  ASSERT_EQ(shield.color(), color);
  ASSERT_EQ(shield.weight(), weight);
  ASSERT_EQ(shield.thrown(), thrown);
}

TEST(Shield, shieldThrow) {
  string style = "round";
  string material = "vibranium";
  string color = "red, white, and blue";
  int weight = 12;
  bool thrown = false;

  Shield shield(style, material, color, weight, thrown);
  ASSERT_EQ(shield.style(), style);
  ASSERT_EQ(shield.material(), material);
  ASSERT_EQ(shield.color(), color);
  ASSERT_EQ(shield.weight(), weight);
  ASSERT_EQ(shield.thrown(), thrown);

  if (shield.thrown == false) {
    print("Captain America throws his mighty shield!");
    shield.throw();
    ASSERT_EQ(shield.thrown(), true);
  }
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}