// A Smart Grid is an electrical grid with automation,
//     communication and IT systems that can monitor power flows from points of generation to points
//     of
//             consumption(even down to the appliances level) and
//             control the power flow
//         or curtail the load to match generation in real time
//         or near real time.The increased visibility,
//     predictability,
//     and even control of generation and demand bring flexibility to both generation and
//     consumption
//             and enable the Utility to better integrate intermittent renewable generation and also
//         reduce cost of peak power.Artificial intelligence is enabling more dependable,
//     efficient,
//     and sustainable energy systems from improving load forecasting accuracy to optimizing power
//     distribution and guaranteeing issue identification

// There is a power grid in a small town and it is distributing power to 10 houses in the town. Each
// house has five appliances and each house consume some power in  watts. Following modules are
// calculating total power consumed in the town. There are three classes named: Class Appliance: It
// represents an electrical appliance with a power rating. Class House: It contains multiple
// appliances, calculates its own consumption. Class Grid: It manages all houses, calculates total
// consumption. Friend Functions allow external functions to access private data for special
// calculations. Constructors initialize appliances, houses, and grid objects.

#include <iostream>
using namespace std;

class Appliance {
  string name;
  double power;

 public:
  Appliance(string n = "Unknown", double p = 0.0) {
    name = n;
    power = p;
  }

  void display() const {
    cout << "  Appliance: " << name << " | Power: " << power << " kW" << endl;
  }

  double getPower() const {
    return power;
  }

  friend double getAppliancePower(const Appliance& a);
};

double getAppliancePower(const Appliance& a) {
  return a.power;
}

class House {
  int houseId;
  Appliance appliances[5];

 public:
  House(int id, Appliance applist[5]) {
    houseId = id;
    for (int i = 0; i < 5; i++)
      appliances[i] = applist[i];
  }

  double totalConsumption() const {
    double sum = 0;
    for (int i = 0; i < 5; i++)
      sum += appliances[i].getPower();
    return sum;
  }

  void display() const {
    cout << "House " << houseId << ", Consumption:" << endl;
    for (int i = 0; i < 5; i++)
      appliances[i].display();
    cout << "  >> Total for House " << houseId << " = " << totalConsumption() << " kW\n\n";
  }

  friend class Grid;
};

class Grid {
  House* houses[10];

 public:
  Grid(House* h[10]) {
    for (int i = 0; i < 10; i++)
      houses[i] = h[i];
  }

  double cityConsumption() const {
    double total = 0;
    for (int i = 0; i < 10; i++)
      total += houses[i]->totalConsumption();
    return total;
  }

  void displayReport() const {
    cout << "\n--- Town Power Consumption Report ---\n";
    for (int i = 0; i < 10; i++) {
      houses[i]->display();
    }
    cout << "TOTAL POWER CONSUMPTION (All Houses): " << cityConsumption() << " kW" << endl;
  }
};

int main() {
  Appliance appliances1[5] = {Appliance("Fan", 0.1), Appliance("TV", 0.2), Appliance("Fridge", 0.8),
                              Appliance("Heater", 1.5), Appliance("Light", 0.05)};

  Appliance appliances2[5] = {Appliance("Fan", 0.12), Appliance("TV", 0.25),
                              Appliance("Fridge", 0.9), Appliance("Heater", 1.4),
                              Appliance("Light", 0.06)};

  House* houses[10];

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      houses[i] = new House(i + 1, appliances1);
    else
      houses[i] = new House(i + 1, appliances2);
  }

  Grid townGrid(houses);
  townGrid.displayReport();

  return 0;
}
