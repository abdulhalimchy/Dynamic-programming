#include<bits/stdc++.h>
#define MX 1000005
#define pb push_back
using namespace std;

int main()
{
    int n, t;
    vector<int> v;
    vector<int> LIS;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &t);
        v.push_back(t);
        vector<int> ::iterator it;
        it=lower_bound(LIS.begin(), LIS.end(), t);
        if(it!=LIS.end())
            *it=t;
        else
            LIS.pb(t);
    }
    cout << LIS.size() << endl;
    return 0;
}
