// Important to remember to consider the diagonal length of the box as well.
// By pythagoras theorem, compare length of match and display output accordingly.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, w, h;
    cin >> n >> w >> h;
    float max_length = sqrt(w*w + h*h);
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= max_length)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }
    

    return 0;
}
