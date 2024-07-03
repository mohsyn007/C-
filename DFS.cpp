#include<bits\stdc++.h>
using namespace std;
vector<int>arr[1001];
bool vis[1001];
void dfs(int i)
{
    vis[i]=true;
    cout<<i<<" ";
    for(auto j:arr[i]){
    if(vis[j]==false)
    dfs(j);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    cout<<"PRE ";
    dfs(1);
}