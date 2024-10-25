// sabse pehle, find topological ordering 
#include<iostream>
#include<stack>
#include<algorithm>
#include<list>
#include<vector>
#include<limits.h>
#include<unordered_map>
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
    void TopoSortDFS(int src, stack<int>&st){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            int nbrdata= nbr.first;
            if(!visited[nbrdata]){
                TopoSortDFS(nbrdata,st);
            }
        }
        // backtracking
        st.push(src);
    }
    void calculateDist(int src, stack<int>&st){
        vector<int>dist(st.size(), INT_MAX);
        dist[0]= 0;
        while(!st.empty()){
            int node= st.top();
            st.pop();
            for(auto nbr: adjList[node]){
                int nbrdata= nbr.first;
                dist[nbrdata] =  min(dist[node]+nbr.second, dist[nbrdata]);
            }
        }
        for(auto i: dist){
            cout<< i<< " ";
        }    
    }
};
int main(){
    Graph g;
    g.Addedge(0,1,5,1);
    g.Addedge(0,2,3,1);
    g.Addedge(2,1,2,1);
    g.Addedge(1,3,3,1);
    g.Addedge(2,3,5,1);
    g.Addedge(2,4,6,1);
    g.Addedge(4,3,1,1);
    stack<int>st;
    int src=0;
    g.TopoSortDFS(src,st);
    g.calculateDist(src,st);
    // while(!st.empty()){
    //     cout<< st.top()<< " ";
    //     st.pop();
    // }

}