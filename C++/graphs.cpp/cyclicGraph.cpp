#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int,bool>visited;
    unordered_map<int, list<int>>adjList;
    void addEdge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);

        }
        else if(dir==0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void Printgraph(){
        for(auto i: adjList){
            cout<< i.first << ": {";
            for(auto j: i.second){
                cout<< j << ",";
            } 
            cout<< "}"; 
        }
    }
    bool checkCycle(int src){
        queue<int>q;
        q.push(src);
        visited[src]= true;
        unordered_map<int,int>parent;
        parent[src]=-1;
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto nbr: adjList[front]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]= true;
                    parent[nbr]= front;
                }
                else if(visited[nbr]== true && parent[front]!= nbr){
                    return true;
                }
            }
        }
        return false;
    }
};
bool solveDFS(int src,int parent, unordered_map<int,bool>&visited, unordered_map<int,list<int>>adjList){
    visited[src]= true;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            bool ans= solveDFS(nbr, src, visited, adjList);
            if(ans== true){
                return true;
            }
        }
        else if(visited[nbr]== true && parent!= nbr){
            return true;
        }
    }
    return false;       
}
bool dfsCyclic(int src, unordered_map<int,bool>dfsTrack, unordered_map<int,bool>visited, unordered_map<int, list<int>>adjList ){
    visited[src]= true;
    dfsTrack[src]= true;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
           bool ans=  dfsCyclic(nbr,dfsTrack,visited,adjList);
           if(ans== true){
            return true;
           }
        }
        else if(visited[nbr]== true && dfsTrack[nbr]== true){
            return true;
        }

    }
    // backtracking the calls
    dfsTrack[src]= false;
    return false;
}
int main(){
    Graph g;
    int V;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    g.addEdge(3,4,0);
    g.addEdge(2,5,0);
    unordered_map<int,bool>visited;
    unordered_map<int, list<int>>adjList;
    int parent=-1;
    for(int i=0; i<V; i++){
        if(!visited[i]){
            bool ans= solveDFS(i,parent, visited, adjList);
            if(ans== true){
                return true;
            }
        }
    }
    return false;
}