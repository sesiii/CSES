/*
Step 1: Understanding the problem

    We need to place two knights on a k×kk×k chessboard and count the number of ways they do not attack each other.
    Two knights attack each other if they are placed in an "L" shape relative to each other. That means if one knight is at (r,c)(r,c), the other should not be at:
        (r+2,c+1)(r+2,c+1)
        (r+2,c−1)(r+2,c−1)
        (r−2,c+1)(r−2,c+1)
        (r−2,c−1)(r−2,c−1)
        (r+1,c+2)(r+1,c+2)
        (r+1,c−2)(r+1,c−2)
        (r−1,c+2)(r−1,c+2)
        (r−1,c−2)(r−1,c−2)

Step 2: Finding the total ways to place two knights

    Any two squares on a k×kk×k chessboard can have knights in k2(k2−1)22k2(k2−1)​ ways (since we are choosing 2 distinct positions out of k2k2).
    This is because:
        The first knight can be placed in k2k2 positions.
        The second knight can be placed in k2−1k2−1 positions (since it must be different from the first).
        Since the order of placement doesn't matter, we divide by 2.

Thus,
Total ways=k^2(k^2−1)/2

Step 3: Finding the number of attacking placements

    We count the number of positions where knights attack each other.
    Each knight, when placed on the board, has at most 8 attack positions (except when near the edges or corners).
    The number of pairs of knights that attack each other can be found by:
        For each 2×32×3 or 3×23×2 block, there are two pairs of attacking knights.
        The number of such blocks is (k−1)(k−2) for vertical attacks and (k−2)(k−1) for horizontal attacks.

Thus,
Attacking positions=4×(k−1)×(k−2)

Step 4: Computing the required count

The number of ways to place two knights such that they do not attack each other is:
Valid placements=Total ways−Attacking positions
Valid placements=Total ways−Attacking positions

Substituting the formulas:
(k^2(k^2−1)/2)−4(k−1)(k−2)


*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void countNonAttackingKnights(int n) {
    for (int k = 1; k <= n; k++) {
        ll totalWays = (1LL * k * k * (k * k - 1)) / 2;  // Total ways to place two knights
        ll attackingWays = 4 * (k - 1) * (k - 2);        // Ways where knights attack each other
        cout << (totalWays - attackingWays) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    countNonAttackingKnights(n);
    return 0;
}