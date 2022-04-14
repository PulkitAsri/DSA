#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

//============================
class Node {
public:
    int data;
    vector<Node*> childs;
};
 
int largestELe = INT_MIN;
 
void largestEleUnderRange(Node* root, int data){

    if (root->data < data) {
        largestELe = max(root->data,
                         largestELe);
    }
    for (Node* child : root->childs) {
 
        largestEleUnderRange(child, data);
    }
}
 
// Function to find the Kth Largest
// element in the given N-ary Tree
void KthLargestElement(Node* root,
                       int K)
{
    // Stores the resultant
    // Kth maximum element
    int ans = INT_MAX;
 
    // Iterate over the range [0, K]
    for (int i = 0; i < K; i++) {
 
        // Recursively call for
        // finding the maximum element
        // from the given range
        largestEleUnderRange(root, ans);
 
        // Update the value of
        // ans and largestEle
        ans = largestELe;
        largestELe = INT_MIN;
    }
 
    // Print the result
    cout << ans;
}
 
// Function to create a new node
Node* newNode(int data)
{
    Node* temp = new Node();
    temp->data = data;
 
    // Return the created node
    return temp;
}
 //======================================================

void solve() {
    int n,q;
    cin>>n>>q;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }



    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}