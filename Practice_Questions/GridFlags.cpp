#include <iostream>
#include <string>
using namespace std;

class Appliance {
  string name;
  float power;
  bool isEssential;

 public:
  Appliance(string n = "Unknown", float p = 0.0, bool essential = true) {
    name = n;
    power = p;
    isEssential = essential;
  }

  float getPower() const {
    return power;
  }

  bool essential() const {
    return isEssential;
  }

  void display() const {
    cout << " Appliance: " << name << " | Power: " << power << " kW"
         << " | " << (isEssential ? "Essential" : "Non-Essential") << endl;
  }
};

// ======================== House Class ========================
class House {
  int houseID;
  Appliance appliances[5];

 public:
  House() {}

  House(int id, float powerValues[5], bool essentialFlags[5]) {
    houseID = id;
    string names[5] = {"Fan", "Light", "TV", "Refrigerator", "WashingMachine"};
    for (int i = 0; i < 5; i++) {
      appliances[i] = Appliance(names[i], powerValues[i], essentialFlags[i]);
    }
  }

  float totalHousePower() const {
    float sum = 0;
    for (int i = 0; i < 5; i++)
      sum += appliances[i].getPower();
    return sum;
  }

  float optimizedPower() const {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
      if (appliances[i].essential())
        sum += appliances[i].getPower();
    }
    return sum;
  }

  void display() const {
    cout << "House " << houseID << " Consumption:" << endl;
    for (int i = 0; i < 5; i++) {
      appliances[i].display();
    }
    cout << " Total House Power = " << totalHousePower() << " kW" << endl;
    cout << " Optimized Power = " << optimizedPower() << " kW" << endl << endl;
  }

  int getID() const {
    return houseID;
  }

  friend class Grid;
};

// ======================== Grid Class ========================
class Grid {
  int numHouses;
  House houses[10];

 public:
  Grid(float allHousePowers[10][5], bool essentialFlags[10][5]) {
    numHouses = 10;
    for (int i = 0; i < numHouses; i++) {
      houses[i] = House(i + 1, allHousePowers[i], essentialFlags[i]);
    }
  }

  void display() const {
    cout << "===== Smart Power Grid Report =====" << endl;
    for (int i = 0; i < numHouses; i++) {
      houses[i].display();
    }
  }

  float totalConsumption() const {
    float total = 0;
    for (int i = 0; i < numHouses; i++)
      total += houses[i].totalHousePower();
    return total;
  }

  float optimizedConsumption() const {
    float total = 0;
    for (int i = 0; i < numHouses; i++)
      total += houses[i].optimizedPower();
    return total;
  }

  void reportHighConsumers() const {
    float avg = totalConsumption() / numHouses;
    cout << "=== High Consumption Houses (> Average " << avg << " kW) ===" << endl;
    for (int i = 0; i < numHouses; i++) {
      if (houses[i].totalHousePower() > avg) {
        cout << "House " << houses[i].getID() << " | Consumption: " << houses[i].totalHousePower()
             << " kW" << endl;
      }
    }
    cout << endl;
  }

  void optimizeLoad() const {
    float total = totalConsumption();
    float optimized = optimizedConsumption();
    cout << "=== Load Optimization Report ===" << endl;
    cout << "Current City Load = " << total << " kW" << endl;
    cout << "Optimized City Load = " << optimized << " kW" << endl;
    cout << "Potential Savings = " << total - optimized << " kW" << endl;
    cout << "================================" << endl;
  }
};

int main() {
  // Example data: 10 houses, each with 5 appliances (power in kW)
  float housePowers[10][5] = {{0.2, 0.1, 0.3, 1.0, 0.5},    {0.3, 0.1, 0.2, 1.2, 0.6},
                              {0.25, 0.15, 0.35, 0.9, 0.4}, {0.4, 0.2, 0.25, 1.1, 0.55},
                              {0.35, 0.2, 0.3, 1.3, 0.7},   {0.3, 0.15, 0.2, 0.95, 0.45},
                              {0.25, 0.1, 0.4, 1.0, 0.5},   {0.2, 0.2, 0.3, 1.25, 0.6},
                              {0.3, 0.15, 0.25, 1.1, 0.55}, {0.35, 0.2, 0.35, 1.4, 0.75}};

  // Essential (1 = essential, 0 = non-essential)
  bool essentialFlags[10][5] = {{1, 1, 0, 1, 0},  // Fan, Light essential; TV, WM non-essential
                                {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0},
                                {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0},
                                {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0}, {1, 1, 0, 1, 0}};

  Grid cityGrid(housePowers, essentialFlags);
  cityGrid.display();
  cityGrid.reportHighConsumers();
  cityGrid.optimizeLoad();

  return 0;
}