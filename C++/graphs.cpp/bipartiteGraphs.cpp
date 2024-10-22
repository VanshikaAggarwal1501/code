#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>adjList;
    void addEdge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);
        }
        else {
            adjList[v].push_back(u);
            adjList[u].push_back(v);
        }
    }
};
bool dfs(int src,int colour,unordered_map<int,bool>&visited, unordered_map<int,list<int>>&adjList, vector<int>&nodes){
    visited[src]= true;
    nodes[src]= colour;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            if(colour==0){
                colour=1;
            }
            else {
                colour=0;
            }
            bool ans= dfs(nbr,colour,visited,adjList,nodes);
            if(ans== false){
                return false;
            }
        }
        else {
            if(nodes[nbr]== colour ){
                return false;
            }
        }
    }
    return true;
}
int main(){
    Graph g;
    int n=8;
    unordered_map<int,bool>visited;
    unordered_map<int,list<int>>adjList;
    vector<int>nodes(n,-1);
    int colour=0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans= dfs(i,colour,visited, adjList, nodes);
            if(ans== false){
                return 0;
            }
        }
    }
    return 1;
}