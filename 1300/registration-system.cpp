#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::cin.sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    unordered_map<string, int> list;
    string name;
    for (int x = 0; x < n; x++) {
        cin >> name;
        if (list.find(name) == list.end()) {
            cout << "OK" << '\n';
            list.insert({name, 1});
        } else {
            cout << name << list[name]++ << '\n';
        }
    }
}