#include "main_strategy.cpp"
#include "gtest/gtest.h"

using namespace shippingStrat;

TEST(Standard, Constructor) {
    Standard standard;
    ASSERT_EQ(standard.price, 1.0);
}

TEST(Expedited, Constructor) {
    Exped exped;
    ASSERT_EQ(exped.price, 2.0);
}

TEST(Overnight, Constructor) {
    Overnight overnight;
    ASSERT_EQ(overnight.price, 3.0);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}