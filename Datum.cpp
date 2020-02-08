// We convert the Days and Months input to total days since 1st Jan (Thursday).
// Then, we take the number of days % 8, which cycles through the days of the week.
// Finally we output the corresponding day accordingly.

#include <iostream>

using namespace std;

int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

int main()
{
    int d, m, count = 0;
    cin >> d >> m;
    
    for (int i = 0; i < m - 1; i++) {
        count += months[i];
    }
    count += d - 1;           // We minus 1 here because 1st Jan corresponds to index 0 in days[]. 
    cout << days[count % 7];  // 7 because the greatest index in the array of days[] is 6

    return 0;
}
