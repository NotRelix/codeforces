#include <iostream>

using namespace std;

void solve()
{
    string word;
    cin >> word;
    if (word.length() > 10)
        cout << word[0] << word.length() - 2 << word[word.length() - 1] << '\n';
    else
        cout << word << '\n';
}

int main()
{
    std::cin.sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}