#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<pair<int,int>>>adjList;
    void addEdge(int u, int v, int wt, bool dir){
        if(dir==1){
            adjList[u].push_back(make_pair(v,wt));
        }
        else {
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));

        }
    }
    void printgraph(){
        for(auto i: adjList){
            cout<< i.first<< ": {";
            for(auto nbr: i.second){
                cout<< "{" << nbr.first<< ","<< nbr.second<< '}';
            }
            cout<< "}";
        }
    }
    void bfs(int src){
        queue<int>q;
        unordered_map<int,bool>visited;
        q.push(src);
        visited[src]= true;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            cout<< node<< " ";
            for(auto nbr: adjList[node]){
                int nbrdata= nbr.first;
                if(!visited[nbrdata]){
                    q.push(nbrdata);
                    visited[nbrdata]= true;
                }
            }
        }
    }
    void dfs(int src, unordered_map<int,bool>&visited){
        visited[src]= true;
        cout<< src<< " ";
        for(auto nbr: adjList[src]){
            int nbrdata= nbr.first;
            if(!visited[nbrdata]){
                dfs(nbrdata, visited);
            }
        }
    }

};
int main(){

}