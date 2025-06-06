#include <bits/stdc++.h>
using namespace std;

vector<int> two_sum(vector<int>& v, int target) {
    int n = v.size();
    vector<pair<int, int>> indexed_v; // Pair of value and its original index
    for (int i = 0; i < n; i++) {
        indexed_v.push_back({v[i], i});
    }

    sort(indexed_v.begin(), indexed_v.end()); // Sort based on values

    int st = 0, End = n - 1;
    vector<int> v3;

    while (st < End) {
        int sum = indexed_v[st].first + indexed_v[End].first;
        if (sum == target) {
            // Push the original indices
            v3.push_back(indexed_v[st].second);
            v3.push_back(indexed_v[End].second);
            break; // Assuming we need just one pair of indices
        } else if (sum < target) {
            st++;
        } else {
            End--;
        }
    }

    return v3;
}

int main() {
    vector<int> v = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> v2 = two_sum(v, target);

    // Output the original indices of the two elements
    for (auto x : v2) {
        cout << x << " ";
    }

    return 0;
}
