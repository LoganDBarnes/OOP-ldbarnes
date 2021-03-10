#include "shield.h"
#include "gtest/gtest.h"

using namespace std;
using namespace shield;

TEST(Shield, Constructor) {
  std::string material = "steel";
  double defense = 25.0;
  std::string style = "round";
  std::string color = "silver";
  int weight = 10;
  bool thrown = false;

  Shield shield(material, defense, style, color, weight, thrown);
  ASSERT_EQ(shield.material(), material);
  ASSERT_EQ(shield.defense(), defense);
  ASSERT_EQ(shield.style(), style);
  ASSERT_EQ(shield.color(), color);
  ASSERT_EQ(shield.weight(), weight);
  ASSERT_EQ(shield.thrown(), thrown);
}

TEST(Shield, shieldThrow) {
  std::string material = "vibranium";
  double defense = 100.0;
  std::string style = "round";
  std::string color = "red, white, and blue";
  int weight = 12;
  bool thrown = false;

  Shield shield(material, defense, style, color, weight, thrown);
  ASSERT_EQ(shield.material(), material);
  ASSERT_EQ(shield.defense(), defense);
  ASSERT_EQ(shield.style(), style);
  ASSERT_EQ(shield.color(), color);
  ASSERT_EQ(shield.weight(), weight);
  ASSERT_EQ(shield.thrown(), thrown);

  if (shield.thrown() == false) {
    printf("Captain America throws his mighty shield!");
    shield.throwShield();
    ASSERT_EQ(shield.thrown(), true);
  }
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}