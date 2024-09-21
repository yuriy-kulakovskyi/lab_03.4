// Lab_03_4.cpp
// Кулаковський Юрій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9

#include <iostream>

using namespace std;

int main() {
  double x, y, R;

  cout << "x = "; cin >> x;
  cout << "y = "; cin >> y;
  cout << "R = "; cin >> R;

  if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && x <= 0 && y <= 0 ||
    y <= pow((x - 1), 2) && x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2))
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  cin.get();
  return 0;
}