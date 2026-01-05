#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mcnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            mcnt++;
        }
    }
    cout << mcnt;

    return 0;
}