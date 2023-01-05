#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

struct Node {
    int data;
    struct Node* left = NULL;
    struct Node* right = NULL;
    Node() {}
 
    Node(int x) { data = x; }
};
 
// Function to construct binary tree from parent array.
Node* createTree(vector<int> parent, int n)
{
    // Create an array to store the reference
    // of all newly created nodes corresponding
    // to node value
    vector<Node*> ref;
 
    // This root represent the root of the
    // newly constructed tree
    Node* root = new Node();
 
    // Create n new tree nodes, each having
    // a value from 0 to n-1, and store them
    // in ref
    for (int i = 0; i < n; i++) {
        Node* temp = new Node(i);
        ref.push_back(temp);
    }
 
    // Traverse the parent array and build the tree
    for (int i = 0; i < n; i++) {
 
        // If the parent is -1, set the root
        // to the current node having
        // the value i which is stored in ref[i]
        if (parent[i] == -1) {
            root = ref[i];
        }
        else {
            // Check if the parent's left child
            // is NULL then map the left child
            // to its parent.
            if (ref[parent[i]]->left == NULL)
                ref[parent[i]]->left = ref[i];
            else
                ref[parent[i]]->right = ref[i];
        }
    }
 
    // Return the root of the newly constructed tree
    return root;
}
 

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> tree(n+1,0);

    vector<int> arr(n,0);
    arr[0]=-1;
    for(int i=1; i<=n-1; i++){
        cin>>arr[i];
    }
    // Node* root=createTree();




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