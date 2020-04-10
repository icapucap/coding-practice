#include <bits/stdc++.h>
using namespace std;
 
int edge=0;
map< int, set<int> > adj; // 1 starting
vector<int>visited; // 0 starting
 
void DFS(int s)
{
    if(visited[s-1]==0)
    {
        visited[s-1]=1;
        for(auto i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(visited[(*i)-1]==0)
            {
                DFS((*i));
                edge++;
            }
        }
    }
    return;
}
 
int main()
{
    int n,k,a,b;
    cin >> n >> k;
    for(int i=0;i<k;i++)
    {
        cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    for(int i=0;i<n;i++)
        visited.push_back(0);
    for(int i=0;i<n;i++)
        DFS(i+1);
    cout << (k-edge) << endl;
}