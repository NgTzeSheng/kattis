// Important learning point
// 2/5 will give 0
// float(2) / 5 will give 0.4
// compiler needs to know to perform division as a floating point

#include <iostream>
#include <vector>

using namespace std;

float percentage_above_avg(int n);

int main() {
    
    int cases;
    cin >> cases;
    
    cout.precision(3);
    
    for (int i = 0; i < cases; i++) {
        int n;
        cin >> n;
        cout << fixed << percentage_above_avg(n) << '%' << endl;
    }
    
    return 0;
}

float percentage_above_avg(int n) {
    int total = 0, count = 0;
    vector<int> scores;
    
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        scores.push_back(score);
        total += score;
    }
    
    float average = float(total / n);
    
    for (vector<int>::iterator it = scores.begin(); it != scores.end(); ++it) {
        if (*it > average) {
            count++;
        }
    }
    
    return float(count) / n * 100;
    
}
