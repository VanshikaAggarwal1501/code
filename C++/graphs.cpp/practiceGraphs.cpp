#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<pair<int,int>>>adjList;
    void AddEdge(int u, int v, int wt, bool dir){
        if(dir==1){
            adjList[u].push_back(make_pair(v,wt));
        }
        else if(dir==0){
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));
        }
    }
    void printEdge(){
        for(auto i: adjList){
            cout<< i.first<< " : {" ;
            for(pair<int,int>p : i.second){
                int first= p.first;
                int second= p.second;
                cout<< "{" << first<< "," << second<< "}" ;
            }
            cout<< "}";
        }
    }
};
void BFStrav(int src, unordered_map<int , list<pair<int,int>>>&adjList){
    unordered_map<int, bool>visited;
    queue<int>q;
    q.push(src);
    visited[src]= true;
    while(!q.empty()){
        int node= q.front();
        q.pop();
        cout<< node<< " ";
        for(auto j: adjList[node]){
            int nodeData= j.first;
            if(!visited[nodeData]){
                q.push(nodeData);
                visited[nodeData]= true;
            }
        }
    }
}
void DFS(int src, unordered_map<int,list<pair<int,int>>>&adjList, unordered_map<int,bool>&visited){
    visited[src]= true;
    cout<< src<< " ";
    for(auto i: adjList[src]){
        int nbr= i.first;
        if(!visited[nbr]){
            DFS(nbr,adjList, visited);
        }
    }
}
int main(){

}
