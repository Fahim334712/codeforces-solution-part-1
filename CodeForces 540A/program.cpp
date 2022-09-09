#include <bits/stdc++.h>
using namespace std;

void checkIt(string &s1, string &s2, int n)
{

    int count;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            count = s1[i] - s2[i];
            if (!(count > 5))
            {
                sum += count;
            }
            else
            {
                int s = 10 - (s1[i] - s2[i]);
                sum += s;
            }
        }
        else
        {
            count = s2[i] - s1[i];
            if (!(count > 5))
            {
                sum += count;
            }
            else
            {
                int s = 10 - (s2[i] - s1[i]);
                sum += s;
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    checkIt(s1, s2, n);
}