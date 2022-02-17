#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,k;
    cin >> h>>k;
    vector<vector<int> > matrix(h);

    for(int i=0;i<h;i++){
        vector<int> temp(k);
        matrix[i]=temp;
        for(int j=0;j<k;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<h;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }




    return 0;

}