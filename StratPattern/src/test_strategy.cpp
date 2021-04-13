#include "strategy.h"
#include "gtest/gtest.h"

#include <iostream>
#include <string>

using namespace std;
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

TEST(Calculate, Cost) {
    double weight = 0.0;
    cout << "Enter weight in lbs: ";
    cin >> weight;

    shippingStrat::Standard standard;
    shippingStrat::Exped exped;
    shippingStrat::Overnight overnight;

    shippingStrat::Shipping ship;

    ship.setStrat (&standard);
    cout << "Standard cost = ";
    ship.getCost(weight);

    ASSERT_EQ(standard.getCost(weight), standard.price * weight);

    ship.setStrat (&exped);
    cout << "Expedited cost = ";
    ship.getCost(weight);

    ASSERT_EQ(exped.getCost(weight), exped.price * weight);

    ship.setStrat (&overnight);
    cout << "Overnight cost = ";
    ship.getCost(weight);

    ASSERT_EQ(overnight.getCost(weight), (overnight.price * weight) + 2);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}