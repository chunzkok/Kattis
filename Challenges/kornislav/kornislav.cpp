#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[4];
    for (int i = 0; i < 4; i++) cin >> nums[i];
    sort(nums, nums+4);
    cout << (nums[0] * nums[2]);
    return 0;
}
