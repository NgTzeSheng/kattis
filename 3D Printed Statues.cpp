// We start with 1 printer and n printjobs. The decision is whether or not to print a statue or another printer.
//
// To decide, we consider the tradeoff: either we double our printers (p) or we minus p printjobs (n - p).
// For both, days will plus 1.
//
// Hence, the choices we have are:
// 1. Double our printers, whereby n is divided by 2 the next day (essentially, 'printing' n/2 statues in 1 day) OR
// 2. Minus n by the number of printers we have (n - printers).
//
// Simplified:
// 1. Print n/2 statues OR
// 2. Print p statues.
// 
// In this case, we will always want to choose the option that prints more (is n/2 larger or p larger?).
//
// if n/2 is larger, we print printers, else, we print p number of statues.

#include <iostream>

using namespace std;

// helper function
int printJob(float n, float p);

int main()
{
  float n; // a float, because we need to evaluate n/2 and n may be odd.
  cin >> n;
  
  cout << printJob(n, 1) << endl;
  
  return 0;
}

int printJob(float n, float p) {
    int days = 0;
    
    if(n / 2 > p ) {
        p *= 2; // doubling our printers
        days++; // adding a day
    }
    else {
        while (n > 0) {
            n = n - p; // print p statues
            days++; // adding a day
        }
        return days; // base case, when we complete all statues, return the days counter
    }
    return days + printJob(n, p); // recursion
}
