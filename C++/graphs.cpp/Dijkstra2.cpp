#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>
#include<list>
#include<set>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<pair<int,int>>>adjList;
    unordered_map<int,bool>visited;
    void Addedge(int u, int v, int wt, bool dir){
        if(dir==1){
            adjList[u].push_back(make_pair(v,wt));
      
        }
        else {
            adjList[v].push_back({u,wt});
            adjList[u].push_back({v,wt});
        }
    }
    void dijkstra(int src, int dest,int n, set<pair<int,int>>&st){
        vector<int>dist(n+1,INT_MAX);
        dist[src]= 0;
        st.insert(make_pair(0,src));
        while(!st.empty()){
            auto topelement= st.begin();
            pair<int,int>topPair = *topelement;
            int topDist= topPair.first;
            int topNode= topPair.second;
            // remove top element
            st.erase(st.begin());
            for(auto nbr: adjList[topNode]){
                int nbrData= nbr.first;
                int weight= nbr.second;
                if(dist[nbrData] > dist[topNode]+ weight){
                    // update set by deleting previous entry and adding new entry
                    auto prevEntry= st.find({weight, nbrData});
                    if(prevEntry != st.end()){
                        // remove prevEntry
                        st.erase(prevEntry);
                    }
                    dist[nbrData]= dist[topNode]+ weight;
                    st.insert(make_pair(dist[nbrData], nbrData));
                }
            }
        }
        for(auto i: dist){
            cout<< i << " ";
        }
    }


};
int main(){
    Graph g;
    g.Addedge(1,3,9,0);
    g.Addedge(1,2,7,0);
    g.Addedge(1,6,14,0);
    g.Addedge(6,3,2,0);
    g.Addedge(6,5,9,0);
    g.Addedge(3,2,10,0);
    g.Addedge(3,4,11,0);
    g.Addedge(2,4,15,0);
    g.Addedge(5,4,6,0);
    set<pair<int,int>>st;
    int n=6;
    int src= 6;
    int dest= 4;
    g.dijkstra(6,4,6,st);
}