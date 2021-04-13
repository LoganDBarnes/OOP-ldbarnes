#include "strategy.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
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

    ship.setStrat (&exped);
    cout << "Expedited cost = ";
    ship.getCost(weight);

    ship.setStrat (&overnight);
    cout << "Overnight cost = ";
    ship.getCost(weight);
        
    return 0;
}