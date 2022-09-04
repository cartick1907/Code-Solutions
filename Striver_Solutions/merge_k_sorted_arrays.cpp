#include <bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        pq.push({kArrays[i][0], i});
        kArrays[i].erase(kArrays[i].begin());
    }
    //     while(!pq.empty()){
    //         cout<<pq.top().first<<" "<<pq.top().second;
    //         cout<<endl;
    //         pq.pop();
    //     }
    while (!pq.empty())
    {
        int nxt = pq.top().second;
        ans.push_back(pq.top().first);
        pq.pop();
        if (kArrays[nxt].size() == 0)
            continue;
        // cout<<kArrays[nxt][0]<<endl;
        pq.push({kArrays[nxt][0], nxt});
        kArrays[nxt].erase(kArrays[nxt].begin());
    }
    return ans;
}
