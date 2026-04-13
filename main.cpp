#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = static_cast<int>(nums.size());
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
        --i;

    if (i >= 0)
    {
        int j = n - 1;
        while (nums[j] <= nums[i])
            --j;
        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    vector<int> a = {2, 1, 3};

    nextPermutation(a);

    for (int x : a)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
