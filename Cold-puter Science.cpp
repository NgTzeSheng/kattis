// an if conditional statement to determine if temperature is < 0, and if so, to increase the count of the counter variable

#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    int n;
    cin >> n;
  
    while (n > 0) {
        int t;
        cin >> t;
        if (t < 0) {
            counter++;
        }
        n--;
    }
    
    cout << counter << endl;
    return 0;
}
