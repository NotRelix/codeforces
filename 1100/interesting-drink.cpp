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
            mid = (left + right) / 2;
            if (right - left < 1)
                break;
            else if (temp < x[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        if (temp >= x[left + 1])
        {
            left++;
        }
        (x[mid] > temp) ? cout << mid << '\n' : cout << mid + 1 << '\n';
    }
}