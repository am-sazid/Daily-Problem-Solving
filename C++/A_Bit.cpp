#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    string in = "++";
    string dec = "--";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int idxin = s.find(in);
        int idxdec = s.find(dec);
        if (idxin > -1 )
        {
            x++;
        }
        if (idxdec > -1)
        {
            x--;
        }
    }
    cout << x;

    return 0;
}