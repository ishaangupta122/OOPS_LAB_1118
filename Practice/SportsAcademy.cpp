#include <iostream>
using namespace std;

class TeamB;

class TeamA {
  int scores[5];

 public:
  void setScores() {
    cout << "Enter Scores for Team A: " << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Player " << (i + 1) << ": ";
      cin >> scores[i];
    }
    cout << endl;
  }

  void showScores() {
    cout << "Scores for Team A: " << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Player " << (i + 1) << ": " << scores[i] << endl;
    }
  }

  friend int swapScores(TeamA& a, TeamB& b);
};

class TeamB {
  int scores[5];

 public:
  void setScores() {
    cout << "Enter Scores for Team B: " << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Player " << (i + 1) << ": ";
      cin >> scores[i];
    }
    cout << endl;
  }

  void showScores() {
    cout << "Scores for Team B: " << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Player " << (i + 1) << ": " << scores[i] << endl;
    }
  }

  friend int swapScores(TeamA& a, TeamB& b);
};

int swapScores(TeamA& a, TeamB& b) {
  int temp[5];

  for (int i = 0; i < 5; i++) {
    temp[i] = a.scores[i];
    a.scores[i] = b.scores[i];
    b.scores[i] = temp[i];
  }
}

int main() {
  TeamA a;
  TeamB b;

  a.setScores();
  b.setScores();

  cout << "Scores Before Swapping: " << endl;
  a.showScores();
  b.showScores();

  swapScores(a, b);

  cout << "\nScores After Swapping: " << endl;
  a.showScores();
  b.showScores();

  return 0;
}
