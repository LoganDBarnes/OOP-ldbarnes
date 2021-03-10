#include "armor.h"
#include "gtest/gtest.h"

using namespace std;
using namespace shield;

TEST(Armor, Constructor) {
      string material("steel");
      double defense = 25.0;

      Armor armor(material,defense);
      ASSERT_EQ(armor.material(),material);
      ASSERT_EQ(armor.defense(),defense);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}