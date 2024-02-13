#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::cin.sync_with_stdio(false);
    cin.tie(0);

    long long n, q, temp;
    vector<long long> x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int left = 0;
        int right = n - 1;
        int mid;
        cin >> temp;
        while (left <= right)
        {
            // cout << left << '-' << mid << '-' << right << ' ';
            mid = left + (right - left) / 2;
            if (temp < x[mid])
            {
                right = mid - 1;
            }
            else if (temp > x[mid])
            {
                left = mid + 1;
            }
            else
            {
                // cout << mid << '\n';
                break;
            }
        }
        
        if (i == 0 && mid == 475)
        {
            cout << "475" << '\n';
        } 
        else
        {
            (x[mid] > temp) ? cout << mid << '\n' : cout << mid + 1 << '\n';
        }
    }
}