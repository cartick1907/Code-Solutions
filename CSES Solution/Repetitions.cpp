#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string dna;
    cin >> dna;

    int flag = 0;
    vector<int> reps;
    int max = 1;
    reps.push_back(max);

    for (auto i = 0; i < dna.size(); i++)
    {

        if (dna[i] == dna[i + 1] && flag == 0)
        {
            max = 2;
            flag = 1;
        }
        else if (dna[i] == dna[i + 1] && flag == 1)
        {
            max++;
        }
        else
        {
            flag = 0;
            reps.push_back(max);
        }
    }
    if (reps.size() == 0)
    {
        reps.push_back(max);
    }

    cout << *max_element(reps.begin(), reps.end());
}