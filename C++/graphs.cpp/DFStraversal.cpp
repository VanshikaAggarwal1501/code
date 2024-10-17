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
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< ": {";
            for(pair<int,int>nbr: i.second){
                cout << "{" << nbr.first << ","<< nbr.second<< "}";
            }
            cout<< "}";

        }
    }
    void BFS(int src){
        unordered_map<int, bool>visited;
        queue<int>q;
        q.push(src);
        visited[src]= true;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            cout<< node<< " ";
            for(auto i: adjList[node]){
                int nbr= i.first;
                if(!visited[nbr]){
                    q.push(nbr);
                }
            }
        }
    }
    void dfs(int src, unordered_map<int,bool> &visited){
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