#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Emiliano Sanchez
// CIS 5 Week 07 · Odd and Even

int main()
{
  const int N = 20;
  int values[N];
  int even[N];
  int odd[N];
  int counterEven = 0;
  int counterOdd = 0;

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i)
  {
    values[i] = rand() % 100;
    std::cout << i << " " << values[i] << "\n";
  }

  std::cout << "\n";

  for (int i = 0; i < N; ++i)
  {
    if (values[i] % 2 == 0)
    {
      even[counterEven] = values[i];
      std::cout << i << " EVENS " << even[counterEven] << "\n";
      counterEven += 1;
    }
    else
    {
      odd[counterOdd] = values[i];
      std::cout << i << " ODDS " << odd[counterOdd] << "\n";
      counterOdd += 1;
    }
  }

  std::cout << "Evens: " << counterEven << "\n";
  std::cout << "Odds: " << counterOdd << "\n";

  return 0;
}
