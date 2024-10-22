// basic creation, bfs , dfs, detect cycle- bfs,dfs,directed graph using dfs
// bipartite graphs- using bfs and dfs
#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;
class Graph{
    public: 
    unordered_map<int, list<int>>adjList;
    unordered_map<int,bool>visited;
    void addEdge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);
        }
        else {
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< " : {" ;
            for(auto nbr: i.second){
                cout<< nbr<< ",";
            }
            cout<< "}";
        }
    }
};
void bfsTraversal(int src, unordered_map<int, list<int>>adjList, unordered_map<int,bool>visited){
    queue<int>q;
    q.push(src);
    cout<< src<< " ";
    while(!q.empty()){
        int front= q.front();
        q.pop();
        for(auto nbr: adjList[front]){
            if(!visited[nbr]){
                visited[nbr]= true;
                q.push(nbr);
            }
        }
    }
}
bool checkcycle(int src, unordered_map<int, list<int>>adjList,unordered_map<int,bool>visited){
    queue<int>q;
    unordered_map<int,int>parent;
    visited[src]= true;
    parent[src]=-1;
    q.push(src);
    while(!q.empty()){
        int front= q.front();
        q.pop();
        for(auto nbr: adjList[front]){
            if(!visited[nbr]){
                visited[nbr]= true;
                parent[nbr]= front;
                q.push(nbr);
            }
            else {
                if(parent[nbr]!= front){
                    return true;
                }
            }
        }
    }
    return false;
}
bool checkCycleDFS(int src, int parent, unordered_map<int,bool>visited, unordered_map<int, list<int>>adjList){
    visited[src]= true;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            bool ans = checkCycleDFS(nbr,src,visited,adjList);
            if(ans== true){
                return true;
            }
        }
        else {
            if(parent!= nbr){
                return true;
            }
        }
    }
    return false;

}
bool directedDFS(int src, unordered_map<int, bool>dfstrack, unordered_map<int, bool>visited, unordered_map<int, list<int>>adjList){
    visited[src]= true;
    dfstrack[src]= true;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            bool ans= directedDFS(nbr,dfstrack, visited, adjList);
            if(ans== true){
                return true;
            }
        }
        else {
            if(dfstrack[nbr]== true){
                return true;
            }
        }
    }
    // backtracking
    dfstrack[src]= false;
    return false;
}
void dfs(int src, unordered_map<int,bool>&visited, unordered_map<int, list<int>>adjList){
    visited[src]= true;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            dfs(nbr,visited,adjList);
        }
    }
}
bool isBipartite(int src, unordered_map<int,bool>visited, vector<int>&nodes, unordered_map<int, list<int>>adjList){
    visited[src]= true;
    queue<int>q;
    q.push(src);
    nodes[src]= 0;
    while(!q.empty()){
        int front= q.front();
        q.pop();
        for(auto nbr: adjList[front]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]= true;
                if(nodes[front]== 1){
                    nodes[nbr]= 0;

                }
                else {
                    nodes[nbr]= 1;
                }
            }
            else {
                if(nodes[front]== nodes[nbr]){
                    return false;
                }
            }
        }
    }
    return true;

}
bool dfsBipartite(int src, int colour, vector<int>&nodes, unordered_map<int,bool>visited, unordered_map<int , list<int>>adjList){
    visited[src]= true;
    nodes[src]= colour;
    for(auto nbr: adjList[src]){
        if(!visited[nbr]){
            bool ans= dfsBipartite(nbr,!colour, nodes, visited, adjList);
            if(ans== true){
                return true;
            }
        }
        else {
            if(nodes[nbr]== nodes[src]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int v;
    vector<int>nodes;

}

