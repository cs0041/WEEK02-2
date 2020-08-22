#include <iostream>

using namespace std;

int main()
{
    int x1, x2, s;
    cin >> x1 >> s;
    if ((x1 > 1000 && x1 < -1000) || (s > 1000 && s < -1000))
    {
        return 0;
    }
    else
    {
        x2 = (s * 2) - x1;
        cout << x2;
    }
    return 0;
}
