#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    
    int n, q;
    //cin >> n >> q;
    scanf("%d %d", &n,  &q);

    vector<vector<int>> base_vec;
    vector<int> final_vec;

    for (auto it=0; it<n; it++)
    {
        vector<int> temp_vec;
        int k;
        cin >> k;
        
        for (auto i=0; i<k; i++)
        {
            int j;
            cin >> j;
            temp_vec.push_back(j);
        }
                
        base_vec.push_back(temp_vec);
    }


    for(auto c=0; c<q;c++)
    {
        int i,j;
        cin >> i >> j;
        final_vec.push_back(base_vec[i][j]);
    }

    for(auto &it :final_vec){
        cout << it << endl;
    }
    

    return 0;
}
