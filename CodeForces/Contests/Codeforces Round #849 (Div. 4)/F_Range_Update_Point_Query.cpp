#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;

/// @brief
int getSum(int BITree[], int index)
{
  int sum = 0; // Initialize result

  // index in BITree[] is 1 more than the index in arr[]
  index = index + 1;

  // Traverse ancestors of BITree[index]
  while (index > 0)
  {
    // Add current element of BITree to sum
    sum += BITree[index];

    // Move index to parent node in getSum View
    index -= index & (-index);
  }
  return sum;
}

// Updates a node in Binary Index Tree (BITree) at given
// index in BITree.  The given value 'val' is added to
// BITree[i] and all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
  // index in BITree[] is 1 more than the index in arr[]
  index = index + 1;

  // Traverse all ancestors and add 'val'
  while (index <= n)
  {
    // Add 'val' to current node of BI Tree
    BITree[index] += val;

    // Update index to that of parent in update View
    index += index & (-index);
  }
}

// Returns the sum of array from [0, x]
int sum(int x, int BITTree1[], int BITTree2[])
{
  return (getSum(BITTree1, x) * x) - getSum(BITTree2, x);
}

void updateRange(int BITTree1[], int BITTree2[], int n,
                 int val, int l, int r)
{
  // Update Both the Binary Index Trees
  // As discussed in the article

  // Update BIT1
  updateBIT(BITTree1, n, l, val);
  updateBIT(BITTree1, n, r + 1, -val);

  // Update BIT2
  updateBIT(BITTree2, n, l, val * (l - 1));
  updateBIT(BITTree2, n, r + 1, -val * r);
}

int rangeSum(int l, int r, int BITTree1[], int BITTree2[])
{
  // Find sum from [0,r] then subtract sum
  // from [0,l-1] in order to find sum from
  // [l,r]
  return sum(r, BITTree1, BITTree2) - sum(l - 1, BITTree1, BITTree2);
}

int *constructBITree(int n)
{
  // Create and initialize BITree[] as 0
  int *BITree = new int[n + 1];
  for (int i = 1; i <= n; i++)
    BITree[i] = 0;

  return BITree;
}

// ??DRIVER
void solve()
{
  int n, q;
  cin >> n >> q;

  // vector<int> arr(n, 0);
  int *BITTree1, *BITTree2;

  // BIT1 to get element at any index in the array
  BITTree1 = constructBITree(n);

  // BIT 2 maintains the extra term which needs to be subtracted
  BITTree2 = constructBITree(n);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    updateRange(BITTree1, BITTree2, n, x, i, i);
  }

  // // TEST
  // for (int i = 0; i < n; i++)
  // {
  //   cout << rangeSum(i, i, BITTree1, BITTree2) << " ";
  // }
  // cout << endl;
  // // TEST

  for (int i = 0; i < q; i++)
  {
    int op;
    cin >> op;
    if (op == 1)
    {
      int l, r;
      cin >> l >> r;
      cout << "UPDATEd" << endl;
      int sum = rangeSum(l, r, BITTree1, BITTree2);
      updateRange(BITTree1, BITTree2, n, sum, l - 1, r - 1);
    }
    else if (op == 2)
    {
      int x;
      cin >> x;
      cout << rangeSum(x, x, BITTree1, BITTree2) << endl;
    }
  }

  // cout << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}